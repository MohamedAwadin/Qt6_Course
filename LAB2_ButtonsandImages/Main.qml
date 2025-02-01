import QtQuick
import QtQuick.Window

Window {
    width: 640
    height: 480
    visible: true
    title: qsTr("Buttons and Images")

    Item {
        width: parent.width
        height: parent.height
        anchors.centerIn: parent


        Grid {
            rows: 2
            columns: 2
            spacing: 10
            anchors.centerIn: parent


            Rectangle {
                id: button1
                width: 100
                height: 100
                color: "lightblue"
                radius: 10


                Text {
                    id: button1Text
                    text: "Button 1"
                    anchors.centerIn: parent
                    font.pixelSize: 16
                }


                Image {
                    id: button1Image
                    width: 80
                    height: 80
                    anchors.centerIn: parent
                    visible: false
                }


                MouseArea {
                    anchors.fill: parent
                    onClicked: {
                        button1Text.visible = false
                        button1Image.source = "file:images/image1.png"
                        button1Image.visible = true
                    }
                }
            }


            Rectangle {
                id: button2
                width: 100
                height: 100
                color: "lightgreen"
                radius: 10

                Text {
                    id: button2Text
                    text: "Button 2"
                    anchors.centerIn: parent
                    font.pixelSize: 16
                }

                Image {
                    id: button2Image
                    width: 80
                    height: 80
                    anchors.centerIn: parent
                    visible: false
                }

                MouseArea {
                    anchors.fill: parent
                    onClicked: {
                        button2Text.visible = false
                        button2Image.source = "file:images/image2.png"
                        button2Image.visible = true
                    }
                }
            }


            Rectangle {
                id: button3
                width: 100
                height: 100
                color: "red"
                radius: 10

                Text {
                    id: button3Text
                    text: "Button 3"
                    anchors.centerIn: parent
                    font.pixelSize: 16
                }

                Image {
                    id: button3Image
                    width: 80
                    height: 80
                    anchors.centerIn: parent
                    visible: false
                }

                MouseArea {
                    anchors.fill: parent
                    onClicked: {
                        button3Text.visible = false
                        button3Image.source = "file:images/image3.png"
                        button3Image.visible = true
                    }
                }
            }


            Rectangle {
                id: button4
                width: 100
                height: 100
                color: "lightyellow"
                radius: 10

                Text {
                    id: button4Text
                    text: "Button 4"
                    anchors.centerIn: parent
                    font.pixelSize: 16
                }

                Image {
                    id: button4Image
                    width: 80
                    height: 80
                    anchors.centerIn: parent
                    visible: false
                }

                MouseArea {
                    anchors.fill: parent
                    onClicked: {
                        button4Text.visible = false
                        button4Image.source = "file:images/image4.png"
                        button4Image.visible = true
                    }
                }
            }
        }
    }
}
