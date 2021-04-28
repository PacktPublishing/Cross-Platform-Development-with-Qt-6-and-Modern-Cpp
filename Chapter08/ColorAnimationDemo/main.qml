import QtQuick
import QtQuick.Window

Window {
    width: 640
    height: 480
    visible: true
    title: qsTr("Sequential Animation Demo")

    Rectangle {
        anchors.centerIn: parent
        width: 100; height: 100
        radius: 50
        color: "red"
        SequentialAnimation on color {
            ColorAnimation { to: "red"; duration: 1000 }
            ColorAnimation { to: "yellow"; duration: 1000 }
            ColorAnimation { to: "green"; duration: 1000 }
            running:true
            loops: Animation.Infinite
        }
    }
}
