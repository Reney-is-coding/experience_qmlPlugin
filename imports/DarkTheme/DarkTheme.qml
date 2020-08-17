
pragma Singleton

import QtQuick 2.6

import Theme 1.0

QtObject {
    readonly property color blue: Qt.darker( Theme.blue, 2  )
    readonly property color yellow: Qt.darker  (Theme.yellow, 2  )
    readonly property color black: Qt.darker  ( Theme.black, 2  )
    readonly property color lightblue:Qt.darker  ( Theme.lightblue, 2  )
    readonly property color raspberry: Qt.darker  ( Theme.raspberry, 2 )
    readonly property color grey: Qt.darker  ( Theme.grey, 2  )
    readonly property color darkgrey: Qt.darker  ( Theme.darkgrey, 2 )
    readonly property color windowcolor: Qt.darker  ( Theme.windowcolor, 2 )
    readonly property color orange: Qt.darker  ( Theme.orange, 2  )
    readonly property color purple: Qt.darker  ( Theme.purple, 2  )
    readonly property color red: Qt.darker  ( Theme.red, 2  )
    readonly property color green: Qt.darker  ( Theme.green, 2  )
    readonly property color white: Qt.darker  ( Theme.white , 2  )

    property int baseSize: 10

    readonly property int smallSize: 10
    readonly property int largeSize: 16
}
