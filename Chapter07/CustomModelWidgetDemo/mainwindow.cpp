#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "contactlistmodel.h"

#include <QStringListModel>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QStringListModel *model = new QStringListModel(this);
    QStringList List;
    List << "Item 1" << "Item 2" << "Item 3" <<"Item 4";
    model->setStringList(List);
    ui->listView->setModel(model);

    ContactListModel *contactModel = new ContactListModel;
    ui->tableView->setModel(contactModel-> getContactListModel());
    ui->tableView->horizontalHeader()->setStretchLastSection(true);

}

MainWindow::~MainWindow()
{
    delete ui;
}

