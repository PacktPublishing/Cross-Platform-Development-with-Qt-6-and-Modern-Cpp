import QtQuick
import QtQuick.Controls
import QtQuick.Window

Window {
    width: 512
    height: 512
    visible: true
    title: qsTr("QML Translation Demo")

    Text {
        id: textElement
        anchors.centerIn: parent
        text: qsTr("Welcome!")
    }
    Row {
        anchors {
            top: parent.top;   topMargin: 10 ;
            right: parent.right; rightMargin: 10;
        }
        spacing: 10
        Text{
            text: qsTr("Select language")
            verticalAlignment: Text.AlignVCenter
            height: 20
        }

        ComboBox {
            height: 20
            model: ListModel {
                id: model
                ListElement { text: qsTr("English")}
                ListElement { text: qsTr("German")}
                ListElement { text: qsTr("Spanish")}
            }
            onCurrentIndexChanged: {
                i18nSupport.languageChanged(currentIndex)
            }
        }
    }
}

