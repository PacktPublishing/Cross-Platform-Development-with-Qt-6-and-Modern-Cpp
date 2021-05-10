#ifndef TRANSLATIONSUPPORT_H
#define TRANSLATIONSUPPORT_H

#include <QObject>
#include <QTranslator>

class TranslationSupport : public QObject
{
    Q_OBJECT
public:
    explicit TranslationSupport(QObject *parent = nullptr);
public slots:
    void languageChanged(int index);
    void switchTranslator(const QString& filename);
signals:
    void updateGUI();
private:
    QTranslator m_translator;
};

#endif // TRANSLATIONSUPPORT_H
