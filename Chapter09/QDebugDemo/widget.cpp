#include "widget.h"
#include "ui_widget.h"
#include <QDebug>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    setValue(100);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::setValue(int value)
{
    qDebug()<<"Value is:" <<value;
}

