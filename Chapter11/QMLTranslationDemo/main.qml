import QtQuick
import QtQuick.Window

Window {
    width: 512
    height: 512
    visible: true
    title: qsTr("QML Translation Demo")
    Text {
        id: textElement
        anchors.centerIn: parent
        text: qsTr("Welcome")
    }
}
