#include "mylabel.h"
#include "mylabelplugin.h"

#include <QtPlugin>

MyLabelPlugin::MyLabelPlugin(QObject *parent)
    : QObject(parent)
{
    m_initialized = false;
}

void MyLabelPlugin::initialize(QDesignerFormEditorInterface * /* core */)
{
    if (m_initialized)
        return;

    // Add extension registrations, etc. here

    m_initialized = true;
}

bool MyLabelPlugin::isInitialized() const
{
    return m_initialized;
}

QWidget *MyLabelPlugin::createWidget(QWidget *parent)
{
    return new MyLabel(parent);
}

QString MyLabelPlugin::name() const
{
    return QLatin1String("MyLabel");
}

QString MyLabelPlugin::group() const
{
    return QLatin1String("My Widgets");
}

QIcon MyLabelPlugin::icon() const
{
    return QIcon();
}

QString MyLabelPlugin::toolTip() const
{
    return QLatin1String("MyLabel");
}

QString MyLabelPlugin::whatsThis() const
{
    return QLatin1String("My Custom Label");
}

bool MyLabelPlugin::isContainer() const
{
    return false;
}

QString MyLabelPlugin::domXml() const
{
    return "<ui language=\"c++\" displayname=\"MyLabel\">\n"
            " <widget class=\"MyLabel\" name=\"myLabel\">\n"
            "  <property name=\"geometry\">\n"
            "   <rect>\n"
            "    <x>0</x>\n"
            "    <y>0</y>\n"
            "    <width>100</width>\n"
            "    <height>16</height>\n"
            "   </rect>\n"
            "  </property>\n"
            "  <property name=\"text\">\n"
            "   <string>MyLabel</string>\n"
            "  </property>\n"
            " </widget>\n"
            "</ui>\n";
}

QString MyLabelPlugin::includeFile() const
{
    return QLatin1String("mylabel.h");
}

