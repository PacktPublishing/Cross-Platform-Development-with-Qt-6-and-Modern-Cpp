import QtQuick
import QtQuick.Window

Window {
    width: 640
    height: 480
    visible: true
    title: qsTr("Qt Quick Compiler")
    Text {
        anchors.centerIn: parent
        text: "Hello World!"
    }
}
