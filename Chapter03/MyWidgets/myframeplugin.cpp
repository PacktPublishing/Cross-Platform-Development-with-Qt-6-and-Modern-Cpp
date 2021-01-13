#include "myframe.h"
#include "myframeplugin.h"

#include <QtPlugin>

MyFramePlugin::MyFramePlugin(QObject *parent)
    : QObject(parent)
{
    m_initialized = false;
}

void MyFramePlugin::initialize(QDesignerFormEditorInterface * /* core */)
{
    if (m_initialized)
        return;

    // Add extension registrations, etc. here

    m_initialized = true;
}

bool MyFramePlugin::isInitialized() const
{
    return m_initialized;
}

QWidget *MyFramePlugin::createWidget(QWidget *parent)
{
    return new MyFrame(parent);
}

QString MyFramePlugin::name() const
{
    return QLatin1String("MyFrame");
}

QString MyFramePlugin::group() const
{
    return QLatin1String("My Containers");
}

QIcon MyFramePlugin::icon() const
{
    return QIcon();
}

QString MyFramePlugin::toolTip() const
{
    return QLatin1String("");
}

QString MyFramePlugin::whatsThis() const
{
    return QLatin1String("");
}

bool MyFramePlugin::isContainer() const
{
    return true;
}

QString MyFramePlugin::domXml() const
{
    return QLatin1String("<widget class=\"MyFrame\" name=\"myFrame\">\n</widget>\n");
}

QString MyFramePlugin::includeFile() const
{
    return QLatin1String("myframe.h");
}

