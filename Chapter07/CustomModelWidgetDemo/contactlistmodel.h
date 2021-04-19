#ifndef CONTACTLISTMODEL_H
#define CONTACTLISTMODEL_H

#include <QStandardItemModel>

class ContactListModel : public QStandardItemModel
{
    Q_OBJECT
public:
    ContactListModel();
    void addContact(QAbstractItemModel *model, const QString &name,
                 const QString &phoneno, const QString &emailid);
    QAbstractItemModel* getContactListModel();
};

#endif // CONTACTLISTMODEL_H
