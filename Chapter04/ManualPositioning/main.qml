import QtQuick
import QtQuick.Window

Window {
    width: 640
    height: 480
    visible: true
    title: qsTr("Manual Positioning")
    Rectangle {
        // Manually positioned at 50,50
        x: 50 // x position
        y: 50 // y position
        width: 80
        height: 80
        color: "blue"
    }
}
