import QtQuick 2.15
import QtQuick.Controls 2.15


Item {
    Rectangle {
        id: mainBackground
        anchors.fill: parent
        color: "black"
    }
    Text {
        id: currentTempText
        anchors.centerIn: parent
        color: "white"
        font.pixelSize: 200
        text: systemController.currentSystemTemperature
    }
    Text {
        id: systemStatus
        anchors {
            horizontalCenter: parent.horizontalCenter
            top: currentTempText.bottom
            topMargin: 20
        }
        font.pixelSize: 30
        color: "white"
        text: systemController.systemStatusMessage
    }

    Image {
        id: heatCoolSelectIcon
        anchors{
            top: temperatureSlider.top
            right:  currentTempText.left
            rightMargin: 100
        }
        width: 70
        height:  70
        source: {
            if (systemController.systemState === 0)
                return "../Assets/fire.png"
            if (systemController.systemState === 1)
                return "../Assets/snow.png"
            if (systemController.systemState === 2)
            return "../Assets/auto.png"
        }
    }
    Image {
        id: settingsIcon
        anchors{
            bottom: temperatureSlider.bottom
            right:  currentTempText.left
            rightMargin: 100
        }
        width: 70
        height:  70
        source: "../Assets/settings.png"
    }

    TemperatureControlSlider {
            id: temperatureSlider
            value: systemController.targetTemp
            anchors {
                top: parent.top
                bottom: parent.bottom
                left: currentTempText.right
                leftMargin: 100
                topMargin: 80
                bottomMargin: 80
            }
        }

}
