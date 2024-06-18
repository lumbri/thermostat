import QtQuick

Window {
    width: 640
    height: 480
    visible: true
    title: qsTr("Thermostat")
    Component.onCompleted: Qt.application.style = "Material"

    Loader {
        id: mainLoader
        anchors.fill: parent
        source: "./UI/HomeScreen/HomeScreen.qml"
    }
}
