import QtQuick
import QtQuick.Window
import QtQuick.Layouts

Window {
    width: 640
    height: 480
    visible: true
    title: qsTr("Layout Demo")
    RowLayout {
        id: layout
        anchors.fill: parent
        spacing: 6
        Rectangle {
            color: 'yellow'
            Layout.fillWidth: true
            Layout.minimumWidth: 50
            Layout.preferredWidth: 150
            Layout.maximumWidth: 200
            Layout.minimumHeight: 100
            Layout.margins: 10
        }
        Rectangle {
            color: 'red'
            Layout.fillWidth: true
            Layout.minimumWidth: 50
            Layout.preferredWidth: 100
            Layout.preferredHeight: 80
            Layout.margins: 10
        }
    }
}
