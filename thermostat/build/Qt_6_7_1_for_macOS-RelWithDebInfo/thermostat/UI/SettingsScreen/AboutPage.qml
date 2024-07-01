import QtQuick 2.15

Item {
    Rectangle {
        id: aboutPageBackground
        width: parent.width * .7
        height: parent.height * .7
        anchors.centerIn: parent
        radius: 5
        color: "black"
        border.width: 3
        border.color: "white"
        Text {
            id: name
            text: "Made by:<br>
Liubov Kulyk <br>
Softawre Engeneer<br><br>
Developed using Qt/QML"
            anchors {
                top: parent.top
                left:  parent.left
                topMargin: 60
                leftMargin: 40
            }
            color: "white"
            font.pixelSize: 30
        }
    }
}
