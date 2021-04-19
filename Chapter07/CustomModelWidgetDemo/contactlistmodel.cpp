#include "contactlistmodel.h"
#include <QStandardItemModel>

ContactListModel::ContactListModel()
{

}


void ContactListModel::addContact(QAbstractItemModel *model, const QString &name,
                                  const QString &phoneno, const QString &emailid)
{
    model->insertRow(0);
    model->setData(model->index(0, 0), name);
    model->setData(model->index(0, 1), phoneno);
    model->setData(model->index(0, 2), emailid);
}

QAbstractItemModel* ContactListModel::getContactListModel()
{
    QStandardItemModel *model = new QStandardItemModel(0, 3, this);

    model->setHeaderData(0, Qt::Horizontal, QObject::tr("Name"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("Phone No"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("Email ID"));

    addContact(model,"John","+1 1234567890","john@abc.com");
    addContact(model,"Michael","+44 213243546","michael@abc.com");
    addContact(model,"Robert","+61 5678912345","robert@xyz.com");
    addContact(model,"Kayla","+91 9876554321","kayla@xyz.com");


    return model;
}
