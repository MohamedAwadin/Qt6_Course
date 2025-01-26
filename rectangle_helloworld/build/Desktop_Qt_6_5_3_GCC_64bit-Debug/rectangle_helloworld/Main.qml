import QtQuick
import QtQuick.Window

Window {
    width: 640
    height: 480
    visible: true
    title: qsTr("Hello World")


    Item {
        width: parent.width
        height: 120
        anchors.centerIn: parent


        Row {
            spacing: 10
            anchors.centerIn: parent


            Rectangle {
                width: 100
                height: 100
                color: "blue"
                radius: 10
                Rectangle{
                    width:  80
                    height: 80
                    color: "red"
                    radius: 10
                    anchors.centerIn: parent
                }
                Text {
                    text: "Hello"
                    anchors.centerIn: parent
                    color: "black"
                    font.pixelSize: 20
                    font.family: "Helvetica [Cronyx]"
                }
            }


            Rectangle {
                width: 100
                height: 100
                color: "gray"
                radius: 10
                Rectangle{
                    width:  80
                    height: 80
                    color: "green"
                    radius: 10
                    anchors.centerIn: parent
                }
                Text {
                    text: "World"
                    anchors.centerIn: parent
                    color: "black"
                    font.pixelSize: 20
                }
            }


            Rectangle {
                width: 100
                height: 100
                color: "yellow"
                radius: 10
                Rectangle{
                    width:  80
                    height: 80
                    color: "blue"
                    radius: 10
                    anchors.centerIn: parent
                }
                Text {
                    text: "!"
                    anchors.centerIn: parent
                    color: "black"
                    font.pixelSize: 20
                }
            }


            Rectangle {
                width: 100
                height: 100
                color: "gray"
                radius: 20
                Rectangle{
                    width:  80
                    height: 80
                    color: "purple"
                    radius: 20
                    anchors.centerIn: parent
                }
                Text {
                    text: "Mohamed"
                    anchors.centerIn: parent
                    color: "black"
                    font.pixelSize: 15
                }
            }


            Rectangle {
                width: 100
                height: 100
                radius: width / 2
                color: "black"
                Rectangle{
                    width:  80
                    height: 80
                    color: "pink"
                    radius: width / 2
                    anchors.centerIn: parent
                }
                Text {
                    text: "Awadin"
                    anchors.centerIn: parent
                    color: "black"
                    font.pixelSize: 20
                }
            }
        }
    }
}
