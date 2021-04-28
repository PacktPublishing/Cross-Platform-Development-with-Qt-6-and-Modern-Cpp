#include "mywidget.h"
#include <QPainter>
#include <QPainterPath>

MyWidget::MyWidget(QWidget *parent)
    : QWidget(parent)
{
}

MyWidget::~MyWidget()
{
}

void MyWidget:: paintEvent(QPaintEvent *event)
{
    QPainter painter(this);

    QPolygon polygon;
    polygon << QPoint(100, 185) << QPoint(175, 175)
         << QPoint(200, 110) << QPoint(225, 175)
         << QPoint(300, 185) << QPoint(250, 225)
         << QPoint(260, 290) << QPoint(200, 250)
         << QPoint(140, 290) << QPoint(150, 225)
         << QPoint(100, 185);

    QBrush brush;
    brush.setColor(Qt::yellow);
    brush.setStyle(Qt::SolidPattern);

    QPen pen(Qt::black, 3, Qt::DashDotDotLine, Qt::RoundCap, Qt::RoundJoin);
    painter.setPen(pen);

    QPainterPath path;
    path.addPolygon(polygon);
    painter.drawPolygon(polygon);
    painter.fillPath(path, brush);

    QWidget:: paintEvent(event);
}
