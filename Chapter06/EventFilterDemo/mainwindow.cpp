#include "mainwindow.h"
#include <QTextEdit>
#include <QKeyEvent>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)

{
    textEdit = new QTextEdit;
    setCentralWidget(textEdit);
    textEdit->installEventFilter(this);

}

bool MainWindow::eventFilter(QObject *monitoredObj, QEvent *event)
{
    if (monitoredObj == textEdit)
    {
        if (event->type() == QEvent::KeyPress)
        {
            QKeyEvent *keyEvent = static_cast<QKeyEvent*>(event);
            qDebug() << "Key Press detected: " << keyEvent->text();
            textEdit->setText("Key Press detected: "+ keyEvent->text());
            return true;
        }
        else
        {
            return false;
        }
    }
    else
    {
        return QMainWindow::eventFilter(monitoredObj, event);
    }
}


MainWindow::~MainWindow()
{
}

