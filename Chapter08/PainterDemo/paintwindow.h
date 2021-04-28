#ifndef PAINTWINDOW_H
#define PAINTWINDOW_H

#include <QWidget>

class PaintWindow : public QWidget
{
    Q_OBJECT

public:
    PaintWindow(QWidget *parent = nullptr);
    ~PaintWindow();
    void paintEvent(QPaintEvent *event);
};
#endif // PAINTWINDOW_H
