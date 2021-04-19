import QtQuick
import QtQuick.Window
import QtQuick.Controls

Window {
    width: 640
    height: 480
    visible: true

    title: qsTr("C++ QML Signals & Slots Demo")

    property int count: cppBackend.counter
    onCountChanged:{
        console.log ("count property is notified.Updated value is:",count)
    }

    Connections {
        target: cppBackend
        onSendToQml: {
            labelCount.text = "Fetched value is " + cppBackend.counter
        }
    }

    Row{
        anchors.centerIn: parent
        spacing: 20
        Text {
            id: labelCount
            text: "Fetched value is " + cppBackend.counter
        }

        Button {
            text: qsTr("Fetch")
            width: 100 ; height: 20
            onClicked: {
                cppBackend.receiveFromQml()
            }
        }
    }
}
