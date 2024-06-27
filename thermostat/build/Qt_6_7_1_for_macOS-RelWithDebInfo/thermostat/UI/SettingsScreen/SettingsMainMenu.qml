import QtQuick 2.15

Item {
    ListModel {
        id: settingsMainMenuListModel
        ListElement { menuText: "Temperature Units"}
        ListElement { menuText: "Schedule"}
        ListElement { menuText: "WiFi Settings"}
        ListElement { menuText: "About"}
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

    ListView {
        id: settingsListView
        anchors.fill: stackViewBackground
        model: settingsMainMenuListModel
        delegate: Rectangle {
            width: stackViewBackground.width
            height: stackViewBackground.height / 4
            color: "black"
            border.color: "white"
            border.width: 4
            radius: 5
            Text {
                anchors.centerIn: parent
                color: "white"
                font.pixelSize: 30
                text: menuText
            }

            MouseArea {
                anchors.fill: parent
                onClicked: {

                }
            }
        }
    }

}
