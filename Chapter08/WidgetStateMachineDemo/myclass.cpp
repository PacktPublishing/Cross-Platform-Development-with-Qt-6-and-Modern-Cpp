#include "myclass.h"
#include "ui_myclass.h"

#include <QStateMachine>
#include <QState>

MyClass::MyClass(QWidget *parent)
    : QWidget(parent) , ui(new Ui::MyClass)
{
    ui->setupUi(this);
    QStateMachine *machine = new QStateMachine(this);

    QState *green = new QState();
    green->assignProperty(ui->pushButton, "text", "Green");
    green->assignProperty(ui->led, "styleSheet", "background-color: rgb(0, 190, 0);");
    green->setObjectName("GREEN");

    QState *red = new QState();
    red->setObjectName("RED");
    red->assignProperty(ui->pushButton, "text", "Red");
    red->assignProperty(ui->led, "styleSheet", "background-color: rgb(255, 0, 0);");


    green->addTransition(ui->pushButton, &QAbstractButton::clicked, red);
    red->addTransition(ui->pushButton, &QAbstractButton::clicked, green);

    machine->addState(green);
    machine->addState(red);
    machine->setInitialState(green);
    machine->start();
}

MyClass::~MyClass()
{
    delete ui;
}

