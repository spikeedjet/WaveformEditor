#include "sinewavewidget.h"
#include "sinewave.h"

#include <QPainterPath>



void SineWaveWidget::paintEvent(QPaintEvent *) {
    QPainter painter(this);
    painter.setRenderHint(QPainter::Antialiasing);

    double yScale = this->height() / (2 * sinWave.magnitude); // Scale for Y-axis
    double xScale = this->width() / (2 * M_PI * sinWave.frequency); // Scale for X-axis

    // Calculate the length of the sine wave based on traveltime
    double waveLength = sinWave.traveltime ; // Length in radians
    double pixelLength = waveLength * xScale / 100; // Convert to pixels

    // Draw sine wave
    painter.setPen(Qt::blue);
    QPainterPath path;
    double step = 1; // Precision control

    path.moveTo(0, this->height() / 2 - yScale * (sinWave.magnitude * sin(sinWave.phase) + sinWave.bias)); // Start at x = 0
    for (double x = 0; x < pixelLength && x < this->width(); x += step) {
        double y = -sinWave.magnitude * sin((x - this->width() / 2) / xScale + 2 * M_PI * sinWave.phase) + sinWave.bias;
        path.lineTo(x, this->height() / 2 - y);
    }

    painter.drawPath(path);

}

void SineWaveWidget::mousePressEvent(QMouseEvent *event) {
    if (event->button() == Qt::LeftButton) {
        // 创建拖拽数据
        QMimeData *mimeData = new QMimeData;

        QByteArray data;
        QDataStream stream(&data, QIODevice::WriteOnly);
        stream << sinWave.ch << sinWave.traveltime << sinWave.magnitude
               << sinWave.frequency << sinWave.phase << sinWave.bias
               << sinWave.waveType;
        mimeData->setData("application/x-sinewave", data);

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
