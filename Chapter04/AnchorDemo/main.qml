import QtQuick
import QtQuick.Window

Window {
    width: 400; height: 400
    visible: true
    title: qsTr("Anchoring Demo")
    Rectangle {
        id: blueRect
        anchors {
            left: parent.left; leftMargin:10
            right: parent.right; rightMargin: 40
            top: parent.top; topMargin: 50
            bottom: parent.bottom; bottomMargin: 100
        }
        color: "blue"
        Rectangle {
            id: redRect
            anchors.centerIn: blueRect
            color:"red"
            width: 150; height: 100
        }
    }
}
