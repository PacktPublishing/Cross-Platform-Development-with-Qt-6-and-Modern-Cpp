import QtQuick
import QtQuick.Window
import QtQuick.Controls

Window {
    width: 640
    height: 480
    visible: true
    title: qsTr("Hello World")

    Rectangle {
        id: mailBox

        signal composeMessage(string message)

        anchors.fill: parent

        Button {
            id:sendButton
            anchors.centerIn: parent
            width: 100
            height: 50
            text: "Send"

            onClicked:  mailBox.composeMessage("Hello World!")
        }
        onComposeMessage: {
            console.log("Message Received",message)
        }
    }

}
