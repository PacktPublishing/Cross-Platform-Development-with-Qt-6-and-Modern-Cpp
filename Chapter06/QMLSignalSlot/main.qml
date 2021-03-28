import QtQuick
import QtQuick.Window

Window {
    width: 640
    height: 480
    visible: true
    title: qsTr("Hello World")

    Rectangle {
        id: mailBox

        signal composeMessage(string message)

        anchors.fill: parent

        Text {
            id: textElement
            anchors {
                top:  parent.top
                left: parent.left
                right:parent.right
            }
            width: 100
            height:50
            text: ""
            horizontalAlignment: Text.AlignHCenter
        }

        Component.onCompleted: {
            mailBox.composeMessage.connect(transmitMessage)
            mailBox.composeMessage("Hello World!")
        }

        function transmitMessage(message) {
            console.log("Received message: " + message)
            textElement.text = message
        }
    }

}
