#ifndef MYCLASS_H
#define MYCLASS_H

#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui { class MyClass; }
QT_END_NAMESPACE

class MyClass : public QWidget
{
    Q_OBJECT

public:
    MyClass(QWidget *parent = nullptr);
    ~MyClass();

private:
    Ui::MyClass *ui;
};
#endif // MYCLASS_H
