CONFIG      += plugin debug_and_release
CONFIG      += c++17
TARGET      = $$qtLibraryTarget(mywidgetcollectionplugin)
TEMPLATE    = lib
HEADERS     = mylabelplugin.h myframeplugin.h mywidgetcollection.h
SOURCES     = mylabelplugin.cpp myframeplugin.cpp \
              mywidgetcollection.cpp
RESOURCES   = icons.qrc
LIBS        += -L. 

greaterThan(QT_MAJOR_VERSION, 4) {
    QT += designer
} else {
    CONFIG += designer
}

target.path = $$[QT_INSTALL_PLUGINS]/designer
INSTALLS    += target

include(mylabel.pri)
include(myframe.pri)
