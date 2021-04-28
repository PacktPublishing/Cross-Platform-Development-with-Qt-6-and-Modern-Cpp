import QtQuick
import QtQuick.Window

Window {
    width: 640
    height: 480
    visible: true
    title: qsTr("States Demo")

    Rectangle {
        id:led
        anchors.centerIn: parent
        width: 100; height: 100
        radius: 50
        color: "red"
        state: "ON"

        MouseArea {
            anchors.fill: parent
            onPressed: led.state = "ON"
            onReleased: led.state = "OFF"
        }

        states: [
            State {
                name: "ON"
                PropertyChanges { target: led; color: "red"}
            },
            State {
                name: "OFF"
                PropertyChanges { target: led; color: "green"}
            }
        ]
        transitions: [
            Transition {
                from: "ON"
                to: "OFF"
                ColorAnimation { target: led; duration: 100}
            },
            Transition {
                from: "OFF"
                to: "ON"
                ColorAnimation { target: led; duration: 100}
            }
        ]
    }
}
