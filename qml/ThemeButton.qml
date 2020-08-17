import QtQuick.Controls 2.2
import QtQuick.Window 2.2


Button {
    onClicked: popup.open()

    Popup {
        id: popup

        width: 1280
        height: 720
	x : Screen.width / 2
	y : Screen. height / 2

	ThemeSlider {
	x : 20
	y : 20
	}
    }
}
