import QtQuick
import QtTest
TestCase {
    id: testObject
    name: "BenchmarkingMyItem"

    function benchmark_once_create_component() {
        var component = Qt.createComponent("MyItem.qml")
        var testObject = component.createObject(testObject)
        testObject.destroy()
        component.destroy()
    }
}
