import QtQuick
import QtQuick.Window 2.12
import Monty 1.0


Window {
    width: 640
    height: 480
    visible: true
    title: qsTr("Thermostat")
    Component.onCompleted: Qt.application.style = "Material"

    SystemController {
        id:systemController
    }

    Loader {
        id: mainLoader
        anchors.fill: parent
        source: "./UI/HomeScreen/HomeScreen.qml"
    }
}
