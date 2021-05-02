import QtQuick
import QtQuick.Window

Window {
    width: 640
    height: 480
    visible: true
    title: qsTr("Visual Inspection Demo")

    Rectangle {
        id: container
        anchors {
            left: parent.left
            leftMargin: 100
            right: parent.right
            top: parent.top
            bottom: parent.bottom
        }
        Rectangle {
            anchors.fill : parent
            color: "transparent"
            border.color: "blue"
        }
        Text {
            text: " Sample text"
            anchors.centerIn: parent
            Rectangle {
                anchors.fill : parent
                color: "transparent"
                border.color: "red"
            }
        }
    }
}
