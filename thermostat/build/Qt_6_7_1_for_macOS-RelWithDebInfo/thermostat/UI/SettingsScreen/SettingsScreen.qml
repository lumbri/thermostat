import QtQuick 2.15

Rectangle {
    id: settingsScreen
    color: "black"
    anchors.fill: parent

    Image {
        id: backButton
        anchors {
            left: parent.left
            top: parent.top
            margins: 10
        }
        width: 40
        height: 40
        source: "../Assets/arrow.png"

        MouseArea {
            anchors.fill: parent
            onClicked: mainLoader.source = "./UI/HomeScreen/HomeScreen.qml"

        }
    }

    Rectangle {
        id: stackViewBackground
        width: parent.width * .7
        height: parent.height * .7
        anchors.centerIn: parent
        radius: 5
        color: "black"
        border.width: 3
        border.color: "white"
    }

}
