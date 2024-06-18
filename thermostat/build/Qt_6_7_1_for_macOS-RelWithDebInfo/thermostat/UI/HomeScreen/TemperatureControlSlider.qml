import QtQuick 2.15
import QtQuick.Controls 2.15

Slider {
    id: temperatureControlSlider

    from: 55
    to: 85
    stepSize: 1
    orientation: Qt.Vertical
    onValueChanged: systemController.setTargetTemp( value )

    background: Rectangle {
        height: parent.height
        width: 3
        anchors.centerIn: parent
        color: "white"
    }
    handle: Rectangle {
        implicitWidth: 76
        implicitHeight: 76
        radius: width / 2
        color: "black"
        border.color: "white"
        border.width: 3
        anchors.horizontalCenter: parent.horizontalCenter
        y: temperatureControlSlider.visualPosition * (temperatureControlSlider.availableHeight - height)

        Text {
            anchors.centerIn: parent
            color: "white"
            font.pixelSize: 30
            text: temperatureControlSlider.value

        }
    }

}
