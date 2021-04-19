import QtQuick
import QtQuick.Window

Window {
    id: root
    width: 600; height: 600
    visible: true
    title: qsTr("Hello World")

    Rectangle {
        id: dragItem
        property point beginDrag
        property bool caught: false
        x: 125; y: 275
        z: mouseArea.drag.active ||  mouseArea.pressed ? 2 : 1
        width: 50; height: 50
        color: "red"

        Drag.active: mouseArea.drag.active
        Drag.hotSpot.x: 10
        Drag.hotSpot.y: 10

        MouseArea {
            id: mouseArea
            anchors.fill: parent
            drag.target: parent
            onPressed: dragItem.beginDrag = Qt.point(dragItem.x, dragItem.y)
            onReleased: {
                if(!dragItem.caught) {
                    dragItem.x = dragItem.beginDrag.x
                    dragItem.y = dragItem.beginDrag.y
                }
            }
        }
    }
    Rectangle {
        x: parent.width/2
        width: parent.width/2 ;height:parent.height
        color: "lightblue"
        DropArea {
            anchors.fill: parent
            onEntered: drag.source.caught = true
            onExited: drag.source.caught = false
        }
    }
}
