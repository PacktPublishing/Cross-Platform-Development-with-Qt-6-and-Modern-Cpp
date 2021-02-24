import QtQuick
import QtQuick.Window

Window {
    width: 400
    height: 400
    visible: true
    title: qsTr("Repeater Demo")

    Row {
        anchors.centerIn: parent
        Repeater {
            model: 5
            Rectangle {
                width: 50; height: 50
                border.width: 1
                color: "green"
            }
        }
    }
}
