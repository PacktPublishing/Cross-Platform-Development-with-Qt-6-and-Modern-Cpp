import QtQuick
import QtQuick.Window

Window {
    width: 512
    height: 512
    visible: true
    title: qsTr("Canvas Demo")

    Canvas {
        id: canvas
        anchors.fill: parent
        onPaint: {
            var context = getContext("2d")
            context.lineWidth = 2
            context.strokeStyle = "red"
            context.beginPath()
            context.moveTo(100,100)
            context.lineTo(250,100)
            context.lineTo(250,150)
            context.lineTo(100,150)
            context.closePath()
            context.stroke()
        }
    }
}
