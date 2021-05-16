import QtQuick
import QtQuick.Window
import QtQuick.Controls

Window {
    width: 640
    height: 480
    visible: true
    title: qsTr("QML Profiling")

    Rectangle {
        anchors.fill: parent
        color: "gray"
        opacity: 0.8
        MouseArea  {
            id: container
            anchors.fill: parent
            onClicked:{
                rectangleComponent.createObject(container, {x: mouseX, y: mouseY});
            }
        }
        Rectangle {
            id: redRect
            anchors.centerIn: parent
            color: "red"
            width: 100; height: 60
        }
        Component {
            id:rectangleComponent
            Rectangle {
                color: "red"
                width: 100; height: 60
            }
        }
    }
}
