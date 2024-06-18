import QtQuick 2.15
import QtQuick.Controls 2.15

Slider {
    id: temperatureControlSlider
    value: 70
    from: 55
    to: 85
    stepSize: 1
    orientation: Qt.Vertical

    background: Rectangle {
        height: parent.height
        width: 3
        anchors.centerIn: parent
        color: "white"
    }
    handle: Rectangle {
        width: 76
        height: 76
        radius: width / 2
        color: "black"
        border.color: "white"
        border.width: 3
        anchors.horizontalCenter: parent.horizontalCenter
        y: temperatureControlSlider.visualPosition * (temperatureControlSlider.availableHeight - height)
    }

}
