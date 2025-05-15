#include "clipareawidget.h"
#include "qmimedata.h"
#include "qpainter.h"
#include <QPainterPath>
#include <QDrag> // 添加此行

// 新增成员变量
int draggingWaveIndex = -1;
QPoint dragStartPos;
bool isDraggingWave = false;
bool dragLeftWidget = false; // 新增：标记拖拽是否离开窗口

void ClipAreaWidget::resizeEvent(QResizeEvent *event) {
    // 当widget大小改变时，更新裁剪区域
    clipRect = rect();
    QWidget::resizeEvent(event);
}

void ClipAreaWidget::paintEvent(QPaintEvent *)  {
    QPainter painter(this);
    painter.setRenderHint(QPainter::Antialiasing);
    painter.fillRect(rect(), Qt::lightGray);

    int n = waves.size();
    if (n == 0) return;

    int areaWidth = this->width() / n;
    int areaHeight = this->height();

    for (int i = 0; i < n; ++i) {
        const Wave* wave = waves[i];
        if (!wave) continue;

        QRect areaRect(i * areaWidth, 0, areaWidth, areaHeight);

        if (wave->waveType == "sin") {
            painterSineWave(*static_cast<const SineWave*>(wave), areaRect);
        } else if (wave->waveType == "triangle") {
            painterTriangleWave(*static_cast<const TriangleWave*>(wave), areaRect);
        }
    }
}

void ClipAreaWidget::dragEnterEvent(QDragEnterEvent *event)  {
    if (event->mimeData()->hasFormat("application/x-trianglewave") ||
        event->mimeData()->hasFormat("application/x-sinewave")) {
        event->acceptProposedAction();
    }
}

void ClipAreaWidget::dropEvent(QDropEvent *event) {
    dragLeftWidget = false; // 拖拽回到窗口，重置标记
    const QMimeData* mime = event->mimeData();
    bool accepted = false;

    // 放宽插入索引的计算逻辑
    int n = waves.size();
    int insertIndex = n; // 默认插入到最后
    if (n > 0) {
        double areaWidth = double(this->width()) / n;
        int x = event->pos().x();
        // 允许插入到任意位置，包括最后
        insertIndex = int((x + areaWidth / 2) / areaWidth);
        if (insertIndex < 0) insertIndex = 0;
        if (insertIndex > n) insertIndex = n;
    }

    if (mime->hasFormat("application/x-sinewave")) {
        QByteArray data = mime->data("application/x-sinewave");
        QDataStream stream(&data, QIODevice::ReadOnly);
        SineWave* sinewave = new SineWave();
        stream >> sinewave->ch
               >> sinewave->traveltime
               >> sinewave->magnitude
               >> sinewave->frequency
               >> sinewave->phase
               >> sinewave->bias
               >> sinewave->waveType;
        waves.insert(insertIndex, sinewave);
        qDebug() << waves;
        hasWave = true;
        accepted = true;
        event->setDropAction(Qt::MoveAction); // 支持移动
    }
    if (mime->hasFormat("application/x-trianglewave")) {
        QByteArray data = mime->data("application/x-trianglewave");
        QDataStream stream(&data, QIODevice::ReadOnly);
        TriangleWave* tri = new TriangleWave();
        stream >> tri->pos1
               >> tri->pos2
               >> tri->t12
               >> tri->t2
               >> tri->t21
               >> tri->t1
               >> tri->loop
               >> tri->waveType;
        waves.insert(insertIndex, tri);
        qDebug() << waves;
        hasWave = true;
        accepted = true;
        event->setDropAction(Qt::MoveAction); // 支持移动
    }
    if (accepted) {
        event->acceptProposedAction();
        update();
    }
}

// 新增：拖拽离开事件
void ClipAreaWidget::dragLeaveEvent(QDragLeaveEvent *event) {
    Q_UNUSED(event);
    dragLeftWidget = true;
}

// 鼠标按下时检测是否在某个波形区域，准备拖动
void ClipAreaWidget::mousePressEvent(QMouseEvent *event)  {
    if (event->button() == Qt::LeftButton) {
        // 检查是否点击在裁剪区域边界附近
        QRect resizeHandle(clipRect.bottomRight() - QPoint(10, 10), QSize(20, 20));
        if (resizeHandle.contains(event->pos())) {
            isResizing = true;
            lastPos = event->pos();
            return;
        }
        // 检查是否点击在某个波形区域，准备拖动
        int n = waves.size();
        if (n > 0) {
            int areaWidth = this->width() / n;
            int x = event->pos().x();
            int idx = x / areaWidth;
            if (idx >= 0 && idx < n) {
                QRect areaRect(idx * areaWidth, 0, areaWidth, this->height());
                if (areaRect.contains(event->pos())) {
                    draggingWaveIndex = idx;
                    dragStartPos = event->pos();
                    isDraggingWave = true;
                }
            }
        }
    }
}

// 鼠标移动时，如果正在拖动波形，显示拖动效果
void ClipAreaWidget::mouseMoveEvent(QMouseEvent *event)  {
    if (isResizing) {
        QPoint delta = event->pos() - lastPos;
        clipRect.setWidth(qMax(50, clipRect.width() + delta.x()));
        clipRect.setHeight(qMax(50, clipRect.height() + delta.y()));
        lastPos = event->pos();
        update();
        return;
    }
    if (isDraggingWave && draggingWaveIndex >= 0 && draggingWaveIndex < waves.size()) {
        // 拖动距离超过一定阈值才开始拖拽
        if ((event->pos() - dragStartPos).manhattanLength() > 10) {
            // 构造mimeData
            const Wave* wave = waves[draggingWaveIndex];
            QMimeData* mimeData = new QMimeData;
            QByteArray data;
            QDataStream stream(&data, QIODevice::WriteOnly);
            if (wave->waveType == "sin") {
                const SineWave* s = static_cast<const SineWave*>(wave);
                stream << s->ch << s->traveltime << s->magnitude << s->frequency << s->phase << s->bias << s->waveType;
                mimeData->setData("application/x-sinewave", data);
            } else if (wave->waveType == "triangle") {
                const TriangleWave* t = static_cast<const TriangleWave*>(wave);
                stream << t->pos1 << t->pos2 << t->t12 << t->t2 << t->t21 << t->t1 << t->loop << t->waveType;
                mimeData->setData("application/x-trianglewave", data);
            }
            // 启动拖拽
            QDrag* drag = new QDrag(this);
            drag->setMimeData(mimeData);
            // 可选：设置拖拽图标
            // drag->setPixmap(...);
            // 移除原有波形
            int removeIdx = draggingWaveIndex;
            isDraggingWave = false;
            draggingWaveIndex = -1;
            Qt::DropAction result = drag->exec(Qt::MoveAction | Qt::CopyAction, Qt::MoveAction);
            if (result == Qt::MoveAction) {
                // 拖拽到本窗口，删除原有
                if (removeIdx >= 0 && removeIdx < waves.size()) {
                    delete waves[removeIdx];
                    waves.removeAt(removeIdx);
                    update();
                }
            } else if (dragLeftWidget) {
                // 拖拽到窗口外部，删除原有
                if (removeIdx >= 0 && removeIdx < waves.size()) {
                    delete waves[removeIdx];
                    waves.removeAt(removeIdx);
                    update();
                }
                dragLeftWidget = false;
            }
            // 拖拽未成功，保留原有
        }
    }
}

// 鼠标释放时，结束拖动
void ClipAreaWidget::mouseReleaseEvent(QMouseEvent *event)  {
    isResizing = false;
    isDraggingWave = false;
    draggingWaveIndex = -1;
    dragLeftWidget = false; // 拖拽结束，重置
}

// 修改后的正弦波绘制函数，增加绘制区域参数
void ClipAreaWidget::painterSineWave(const SineWave& sinWave, const QRect& areaRect) {
    QPainter painter(this);
    painter.setRenderHint(QPainter::Antialiasing);

    double yScale = areaRect.height() / (2 * sinWave.magnitude);
    double xScale = areaRect.width() / (2 * M_PI * sinWave.frequency);

    double waveLength = sinWave.traveltime;
    double pixelLength = waveLength * xScale / 100;

    painter.setPen(Qt::blue);
    QPainterPath path;
    double step = 1;

    path.moveTo(areaRect.left(), areaRect.center().y() - yScale * (sinWave.magnitude * sin(sinWave.phase) + sinWave.bias));
    for (double x = 0; x < pixelLength && x < areaRect.width(); x += step) {
        double y = -sinWave.magnitude * sin((x - areaRect.width() / 2) / xScale + 2 * M_PI * sinWave.phase) + sinWave.bias;
        path.lineTo(areaRect.left() + x, areaRect.center().y() - y);
    }

    painter.drawPath(path);
}

// 修改后的三角波绘制函数，增加绘制区域参数
void ClipAreaWidget::painterTriangleWave(const TriangleWave& triangleWave, const QRect& areaRect) {
    QPainter painter(this);
    painter.setRenderHint(QPainter::Antialiasing);
    painter.setPen(Qt::red);

    QVector<QPointF> points;
    double totalTime = triangleWave.t12 + triangleWave.t2 + triangleWave.t21 + triangleWave.t1;
    double width = areaRect.width();
    double height = areaRect.height();
    double scaleX = width / totalTime;
    double scaleY = height / (triangleWave.pos2 - triangleWave.pos1) - 2;

    points.append(QPointF(areaRect.left(), areaRect.bottom() - (triangleWave.pos1 * scaleY)));
    points.append(QPointF(areaRect.left() + triangleWave.t12 * scaleX, areaRect.bottom() - (triangleWave.pos2 * scaleY)));
    points.append(QPointF(areaRect.left() + (triangleWave.t12 + triangleWave.t2) * scaleX, areaRect.bottom() - (triangleWave.pos2 * scaleY)));
    points.append(QPointF(areaRect.left() + (triangleWave.t12 + triangleWave.t2 + triangleWave.t21) * scaleX, areaRect.bottom() - (triangleWave.pos1 * scaleY)));
    points.append(QPointF(areaRect.right(), areaRect.bottom() - (triangleWave.pos1 * scaleY)));

    painter.drawPolyline(points);
}

