import QtQuick
import QtQuick.Controls
import QtTest
Button {
    id: pushButton
    SignalSpy {
        id: clickSpy
        target: pushButton
        signalName: "clicked"
    }
    TestCase {
        name: "PushButton"
        function test_click() {
            compare(clickSpy.count, 0)
            pushButton.clicked();
            compare(clickSpy.count, 1)
        }
    }
}
