import QtQuick
import QtQuick.Window

Window {
    width: 600
    height: 600
    visible: true
    title: qsTr("Anchoring Demo")
    Rectangle {
        id: blueRect
        anchors {
            left: parent.left
            right: parent.right
            top: parent.top
            bottom: parent.bottom
            leftMargin:10
            rightMargin: 50
            topMargin: 100
            bottomMargin: 200
        }
        color: "blue"
        Rectangle {
            id: redRect
            anchors.centerIn: blueRect
            color:"red"
            width: 100
            height: 100
        }
    }
}
