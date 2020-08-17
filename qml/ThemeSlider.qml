import QtQuick 2.0
import QtQuick.Controls 2.2


Slider {
    id : themeSlider
    from: 50
    to: 150
    stepSize: 50
    value: 100
    width : 150
    onValueChanged: graphicIdentity.modifyLuminosity(themeSlider.value)
}
