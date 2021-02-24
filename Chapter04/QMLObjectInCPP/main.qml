import QtQuick
import QtQuick.Window
import QtQuick.Controls
import MyCustomObject

Window {
    width: 640
    height: 480
    visible: true
    title: qsTr("QML Object in C++")

    CustomObject{
        id: customObject
    }

    Button {
        id: button
        anchors.centerIn: parent
        text: qsTr("Click Me!")
        onClicked: {
            customObject.setObject(button);
        }
    }
}
