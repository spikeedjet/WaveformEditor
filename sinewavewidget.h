#ifndef SINEWAVEWIDGET_H
#define SINEWAVEWIDGET_H

#include <QObject>
#include <QWidget>
#include <QWidget>
#include <QPainter>
#include <QMouseEvent>
#include <QDrag>
#include <QMimeData>
#include <QApplication>
#include "sinewave.h"

class SineWaveWidget : public QWidget
{
    Q_OBJECT
public:
    explicit SineWaveWidget(QWidget *parent = nullptr) : QWidget(parent) {
        setMinimumSize(200, 100);
    }



signals:

protected:
    void paintEvent(QPaintEvent *event) override;

    void mousePressEvent(QMouseEvent *event) override;

private:

};

#endif // SINEWAVEWIDGET_H
