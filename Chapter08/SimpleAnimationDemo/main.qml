import QtQuick
import QtQuick.Window

Window {
    width: 640
    height: 480
    visible: true
    title: qsTr("Animation Demo")

    Image {
        anchors.centerIn: parent
        source: "qrc:/logo.png"
        RotationAnimator on rotation {
            from: 0;
            to: 360;
            duration: 1000
            running:true
            loops: Animation.Infinite
        }
    }
}
