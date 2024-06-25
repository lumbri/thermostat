import QtQuick 2.15


Rectangle {
    id: heatSelectDialog
    signal destroyMe()

    anchors.fill: parent
    color: Qt.rgba(0, 0, 0, 0)

    MouseArea{
        anchors.fill: parent
        onClicked: heatSelectDialog.destroyMe ()
    }
    Rectangle {
        id: innerRectangle
        width: parent.width / 2
        height: parent.height * .8
        color: "black"
        border.color: "white"
        border.width: 3

    }

}
