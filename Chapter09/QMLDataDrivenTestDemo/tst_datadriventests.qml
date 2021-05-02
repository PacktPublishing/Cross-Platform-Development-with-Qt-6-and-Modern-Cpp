import QtQuick
import QtTest
TestCase {
    name: "DataDrivenTests"

    function test_table_data() {
        return [
            {tag: "10 + 20 = 30", a: 10, b: 20, result: 30 },
            {tag: "30 + 60 = 90", a: 30, b: 60, result: 90 },
            {tag: "50 + 50 = 100", a: 50, b: 50, result: 50 },
        ]
    }
    function test_table(data) {
        compare(data.a + data.b, data.result)
    }
}
