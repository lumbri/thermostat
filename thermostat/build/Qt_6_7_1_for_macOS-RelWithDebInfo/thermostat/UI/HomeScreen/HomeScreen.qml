import QtQuick 2.15
import QtQuick.Controls 2.15


Item {
    id: homeScreen

    property var heatSelectDialogHolder: null

    function createHeatSelectDialog() {
        console.log("createHeatSelectDialog called") // Отладочное сообщение
        if (heatSelectDialogHolder === null) {
            console.log("heatSelectDialogHolder is null, creating component") // Отладочное сообщение
            var component = Qt.createComponent("HeatSelectDialog.qml")
            console.log("Component status:", component.status) // Отладочное сообщение
            if (component.status === Component.Ready) {
                console.log("Component is ready") // Отладочное сообщение
                heatSelectDialogHolder = component.createObject(homeScreen, {"x": 0, "y": 0})
                if (heatSelectDialogHolder) {
                    console.log("Component created successfully") // Отладочное сообщение
                    heatSelectDialogHolder.anchors.fill = homeScreen
                    heatSelectDialogHolder.destroyMe.connect(destroyHeatSelectDialog)
                } else {
                    console.log("Failed to create component") // Отладочное сообщение
                }
            } else if (component.status === Component.Error) {
                console.log("Error loading component:", component.errorString()) // Отладочное сообщение
            }
        } else {
            console.log("heatSelectDialogHolder is not null") // Отладочное сообщение
        }
    }

    function destroyHeatSelectDialog() {
        console.log("destroyHeatSelectDialog called") // Отладочное сообщение
        if (heatSelectDialogHolder !== null) {
            heatSelectDialogHolder.destroy()
            heatSelectDialogHolder = null
        }
    }

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
        MouseArea {
            anchors.fill: parent
            onClicked: createHeatSelectDialog ()

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
