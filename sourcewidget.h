#ifndef SOURCEWIDGET_H
#define SOURCEWIDGET_H

#include <QObject>
#include <QWidget>
#include <QWidget>
#include <QPainter>
#include <QMouseEvent>
#include <QDrag>
#include <QMimeData>
#include <QApplication>

class SourceWidget : public QWidget
{
    Q_OBJECT
public:
    explicit SourceWidget(QWidget *parent = nullptr) : QWidget(parent) {
        setMinimumSize(200, 100);
    }

signals:

protected:
    void paintEvent(QPaintEvent *) override ;

    void mousePressEvent(QMouseEvent *event) override ;

};

#endif // SOURCEWIDGET_H


