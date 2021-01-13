#ifndef MYFRAME_H
#define MYFRAME_H

#include <QtDesigner>
#include <QFrame>

class QDESIGNER_WIDGET_EXPORT MyFrame : public QFrame
{
    Q_OBJECT

public:
    MyFrame(QWidget *parent = 0);
};

#endif // MYFRAME_H
