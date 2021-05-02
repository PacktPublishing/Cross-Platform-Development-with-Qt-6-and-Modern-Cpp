import QtQuick
import QtTest
MouseArea {
    width: 100; height: 100

    TestCase {
        name: "TestRightKeyPress"
        when: windowShown
        function test_key_click() {
            keyClick(Qt.Key_Right)
        }
    }
}
