#include "sourcewidget.h"
#include "trianglewave.h"

// 声明 triangleWave 为外部变量
extern TriangleWave triangleWave;

void SourceWidget::paintEvent(QPaintEvent *) {
    QPainter painter(this);
    painter.setRenderHint(QPainter::Antialiasing);
    painter.setPen(Qt::red);

    // 绘制波形
    QVector<QPointF> points;
    double totalTime = triangleWave.t12 + triangleWave.t2 + triangleWave.t21 + triangleWave.t1;
    double width = this->width();
    double height = this->height();
    double scaleX = width / totalTime;
    double scaleY = height / (triangleWave.pos2 - triangleWave.pos1) - 2;

    // Calculate points for the triangle wave
    points.append(QPointF(0, height - (triangleWave.pos1 * scaleY))); // Start at pos1
    points.append(QPointF(triangleWave.t12 * scaleX, height - (triangleWave.pos2 * scaleY))); // Move to pos2
    points.append(QPointF((triangleWave.t12 + triangleWave.t2) * scaleX, height - (triangleWave.pos2 * scaleY))); // Hold at pos2
    points.append(QPointF((triangleWave.t12 + triangleWave.t2 + triangleWave.t21) * scaleX, height - (triangleWave.pos1 * scaleY))); // Return to pos1
    points.append(QPointF(width, height - (triangleWave.pos1 * scaleY))); // Hold at pos1

    painter.drawPolyline(points);
}

void SourceWidget::mousePressEvent(QMouseEvent *event) {
    if (event->button() == Qt::LeftButton) {
        // 创建拖拽数据
        QMimeData *mimeData = new QMimeData;
        QByteArray data;
        QDataStream stream(&data, QIODevice::WriteOnly);
        stream << triangleWave.pos1 << triangleWave.pos2 << triangleWave.t12
               << triangleWave.t2 << triangleWave.t21 << triangleWave.t1
               << triangleWave.loop << triangleWave.waveType;
        mimeData->setData("application/x-trianglewave", data);

        // 创建拖拽对象
        QDrag *drag = new QDrag(this);
        drag->setMimeData(mimeData);

        // 可选：设置拖拽时的预览图像
        QPixmap pixmap(size());
        render(&pixmap);
        drag->setPixmap(pixmap.scaled(100, 50, Qt::KeepAspectRatio));

        drag->exec(Qt::CopyAction);
    }
}
