#ifndef CLIPAREAWIDGET_H
#define CLIPAREAWIDGET_H

#include "sinewave.h"
#include "trianglewave.h" // 新增包含TriangleWave头文件
#include <QObject>
#include <QWidget>
#include <QDragEnterEvent>
#include <QDropEvent>
#include <QMouseEvent>
#include <QRect>
#include <QVector>

class ClipAreaWidget : public QWidget
{
    Q_OBJECT
public:
    ClipAreaWidget(QWidget *parent) : QWidget(parent), hasWave(false), isResizing(false) {
        setAcceptDrops(true);
        clipRect = rect();
    }

protected:
    void resizeEvent(QResizeEvent *event) override;

    void paintEvent(QPaintEvent *) override;

    void dragEnterEvent(QDragEnterEvent *event) override;

    void dropEvent(QDropEvent *event) override; // 取消注释并声明

    void mousePressEvent(QMouseEvent *event) override;

    void mouseMoveEvent(QMouseEvent *event) override;

    void mouseReleaseEvent(QMouseEvent *event) override;

    void dragLeaveEvent(QDragLeaveEvent *event) override;


private:
    void painterSineWave(const SineWave& sinWave,  const QRect& areaRect);
    void painterTriangleWave(const TriangleWave& triangleWave,  const QRect& areaRect);

private:
    QVector<Wave*> waves; // 统一存储所有波形（SineWave、TriangleWave等）
    bool hasWave = false;
    QRect clipRect; // 裁剪区域
    bool isResizing = false;
    QPoint lastPos;
    int draggingWaveIndex = -1;
    QPoint dragStartPos;
    bool isDraggingWave = false;
};

#endif // CLIPAREAWIDGET_H
