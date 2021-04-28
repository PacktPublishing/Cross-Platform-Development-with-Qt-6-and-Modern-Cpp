#include "paintwindow.h"
#include <QPainter>
#include <QImage>

PaintWindow::PaintWindow(QWidget *parent)
    : QWidget(parent)
{
}

PaintWindow::~PaintWindow()
{
}

void PaintWindow::paintEvent(QPaintEvent *event)
{
    QPainter painter;
    painter.begin(this);

    painter.drawLine(QPoint(50, 50), QPoint(200, 50));

    painter.drawText(QPoint(50, 100), "Text");

    painter.drawEllipse(QPoint(100,150),50,20);

    QRectF drawingRect(50, 200, 100, 50);
    int startAngle = 90 * 16;
    int spanAngle = 180 * 16;
    painter.drawArc(drawingRect, startAngle, spanAngle);

    QRectF drawingRectPie(150, 200, 100, 50);
    startAngle = 60 * 16;
    spanAngle = 70 * 16;
    painter.drawPie(drawingRectPie, startAngle, spanAngle);

    painter.end();

    QWidget::paintEvent(event);
}
