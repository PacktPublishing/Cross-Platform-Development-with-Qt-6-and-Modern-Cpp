import QtQuick
import QtQuick.Window

Window {
    width: 640
    height: 480
    visible: true
    title: qsTr("Multitouch Example")

    MultiPointTouchArea {
        anchors.fill: parent
        touchPoints: [
            TouchPoint { id: tp1 },
            TouchPoint { id: tp2 }
        ]
    }
    Rectangle {
        width: 100
        height: 100
        color: "blue"
        x: tp1.x
        y: tp1.y
    }

    Rectangle {
        width: 100
        height: 100
        color: "red"
        x: tp2.x
        y: tp2.y
    }

}
