import QtQuick
import QtQuick.Window

Window {
    width: 640
    height: 480
    visible: true
    title: qsTr("QML CPP M/V Demo")

    ListView {
        id: listview
        width: 120
        height: 200
        model: myModel
        delegate: Text { text: modelData }
    }

    Component.onCompleted: console.log (myModel)
}

