
pragma Singleton

import QtQuick 2.6

import DarkTheme 1.0

QtObject {

    readonly property color blue:  Qt.rgba ( 0/255,  133/255/255,  186/255/255 )
    readonly property color yellow: Qt.rgba  (250/255,  214/255,  19/255 )
    readonly property color black: Qt.rgba  ( 35/255,  31/255,  32/255 )
    readonly property color lightblue:Qt.rgba  ( 90/255,  183/255,  178/255 )
    readonly property color raspberry: Qt.rgba  ( 230/255,  5/255,  102/255 )
    readonly property color grey: Qt.rgba  ( 190/255,  185/255,  181/255 )
    readonly property color darkgrey: Qt.rgba  ( 56/255,  62/255,  66/255 )
    readonly property color windowcolor: Qt.rgba (102/255, 102/255, 102/255)
    readonly property color orange: Qt.rgba  ( 248/255,  111/255,  53/255 )
    readonly property color purple: Qt.rgba  ( 142/255,  63/255,  144/255 )
    readonly property color red: Qt.rgba  ( 223/255,  27/255,  45/255 )
    readonly property color green: Qt.rgba  ( 159/255,  188/255,  77/255)
    readonly property color white: Qt.rgba  ( 255/255,  255/255,  255/255 )

    property int baseSize: 10

    readonly property int smallSize: 10
    readonly property int largeSize: 16
}
