import QtQuick
import QtQuick.Window
import QtQuick.Controls

Window {
    width: 640
    height: 480
    visible: true
    title: qsTr("Hello World")
    Text {
          anchors.centerIn: parent
          text: "Hello World!"
      }
}
