import QtQuick
import QtTest

TestCase {
    name: "Logic Tests"

    function test_addition() {
        compare(4 + 4, 8, "Logic: 4 + 4 = 8")
    }
    function test_subtraction() {
        compare(9 - 5, 4, "Logic: 9 - 5 = 4")
    }

    function test_multiplication() {
        compare(3 * 3, 6, "Logic: 3 * 3 = 6")
    }
}
