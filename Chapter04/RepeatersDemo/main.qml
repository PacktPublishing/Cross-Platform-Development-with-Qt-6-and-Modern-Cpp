import QtQuick
import QtQuick.Window

Window {
    width: 400; height: 200
    visible: true
    title: qsTr("Repeater Demo")

    Row {
        anchors.centerIn: parent
        spacing: 10
        Repeater {
            model: 5
            Rectangle {
                width: 60; height: 40
                border{ width: 1; color: "black";}
                color: "green"
            }
        }
    }
}
