import QtQuick 2.0
import QtQuick.Window 2.1
import Theme 1.0
import DarkTheme 1.0

Window {
    width: Qt.platform.os == "android" ? Screen.width : 512
    height: Qt.platform.os == "android" ? Screen.height : 512
    visible: true
    color: Theme.black

    Rectangle {
        id: machin
        width: 150
        height: 150
        color: DarkTheme.red
    }
    Rectangle {
        width: 150
        height: 150
        anchors.left: machin.right
        color: Theme.red
    }
}
