#include "translationsupport.h"
#include <QCoreApplication>

TranslationSupport::TranslationSupport(QObject *parent) : QObject(parent)
{
        qApp->installTranslator(&m_translator);
}

void TranslationSupport::switchTranslator(const QString& filename)
{
    qApp->removeTranslator(&m_translator);
    if(m_translator.load(filename))
    {
        qApp->installTranslator(&m_translator);
        emit updateGUI();
    }
}

void TranslationSupport::languageChanged(int index)
{
    switch(index)
    {
    case 0: //English
        switchTranslator(":/i18n/QMLDynamicTranslation_en_US.qm");
        break;
    case 1: //German
        switchTranslator(":/i18n/QMLDynamicTranslation_de_DE.qm");
        break;
    case 2: //Spanish
        switchTranslator(":/i18n/QMLDynamicTranslation_es_ES.qm");
        break;
    }
}
