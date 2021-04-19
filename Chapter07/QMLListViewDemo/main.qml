import QtQuick
import QtQuick.Window

Window {
    width: 640
    height: 480
    visible: true
    title: qsTr("QML ListView Demo")

    Rectangle {
        width: 200; height: 200

        ListModel {
            id: contactListModel
            ListElement {
                name: "John" ; phone: "+1 1234567890" ; email: "john@abc.com"
            }
            ListElement {
                name: "Michael" ; phone: "+44 213243546" ; email: "michael@abc.com"
            }
            ListElement {
                name: "Robert" ; phone: "+61 5678912345" ; email: "robert@xyz.com"
            }
            ListElement {
                name: "Kayla" ; phone: "+91 9876554321" ; email: "kayla@xyz.com"
            }
        }

        Component {
            id: contactDelegate
            Row {
                id: contact
                spacing: 20
                Text { text: " Name: " + name; }
                Text { text: " Phone no: " + phone }
                Text { text: " Email ID: " + email }
            }
        }

        ListView {
            anchors.fill: parent
            model: contactListModel
            delegate: contactDelegate
        }
    }
}
