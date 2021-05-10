import QtQuick
import QtQuick.Window
import QtQuick.Controls

Window {
    width: 640
    height: 480
    visible: true
    title: qsTr("QML JS integration")

    function btnClicked(controlName) {
        controlName.text = "JS called!"
    }
    Column  {
        anchors.centerIn: parent
        Button {
            text:"Call JS!"
            onClicked: btnClicked(displayText)
        }
        Text {
            id: displayText
        }
    }
}
