import QtQuick 2.15
import QtQuick.Controls

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
            onClicked: {
                if (settingsStackView.depth >= 2 )
                    settingsStackView.pop()
                else
                    mainLoader.source = "./UI/HomeScreen/HomeScreen.qml"
            }

        }
    }


    StackView {
        id: settingsStackView
        anchors.fill: parent
        initialItem: "SettingsMainMenu.qml"
        clip: true
    }

}
