import QtQuick
import QtQuick.Window
import backend.logic
import backend.element

Window {
    width: 640
    height: 480
    visible: true
    title: qsTr("QML CPP integration")

    BackendLogic {
        // access properties, functions, signals
        id: backend
    }
    UsingElements{
        id: backendElement
    }

    Column {
        anchors.centerIn: parent
        Text {
            text: "CPP Context Property Value: "+ radius
        }
        Text {

            text: "From Backend Logic : "+ backend.getData()
        }
        Text {

            text: "From Backend Element : "+ backendElement.readValue()
        }
    }
}
