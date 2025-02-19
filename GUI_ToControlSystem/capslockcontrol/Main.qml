import QtQuick 2.15
import QtQuick.Controls 2.15
import QtQuick.Controls.Imagine
import QtQuick.Window
ApplicationWindow {
    visible: true
    width: 400
    height: 300
    title: "System Control"
    readonly property color colorGlow: "#1d6d64"
    readonly property color colorMain: "#6affcd"
    readonly property color colorBright: "#ffffff"


    StackView {
        id: stackView
        initialItem: loginPage
        anchors.fill: parent
    }

    // LOGIN PAGE
    Component {
        id: loginPage
        Item {
            width: parent.width
            height: parent.height

            AnimatedImage {
                source: "login_background.gif"
                anchors.fill: parent
            }

            Column {
                spacing: 20
                //anchors.centerIn: parent
                anchors.horizontalCenter: parent.horizontalCenter
                anchors.verticalCenter: parent.verticalCenter



                Button {

                    text: "Enter Control Panel"
                    onClicked: stackView.push(controlPage)
                    width: 200
                    height: 40
                    font.pixelSize: 16
                    //anchors.horizontalCenter: parent.horizontalCenter

                    background: Rectangle {
                        color: colorGlow
                        radius: 10
                    }
                }
            }
        }
}
    // CONTROL PAGE
    Component {
        id: controlPage
        Item {
            width: parent.width
            height: parent.height

            Image {
              //  source: "control_background.jpg"
                source: capsLockController.imageSource
                anchors.fill: parent
                fillMode: Image.PreserveAspectCrop
            }

            Column {
                spacing: 15
                anchors.centerIn: parent

                Image {
                    id: capsLockIcon
                    source: capsLockController.iconSource

                    width: 200
                    height: 200
                    anchors.horizontalCenter: parent.horizontalCenter
                    MouseArea {
                        anchors.fill: parent
                        onClicked: capsLockController.toggleCapsLock()
                    }
                }

                Rectangle{
                    id: amblight_txt
                    width: 400
                    height: 50
                    color: "black"
                    border.color: colorGlow
                    radius: 5
                    anchors.horizontalCenter: parent.horizontalCenter
                    Text {
                        id : ambientlighttxt
                        text: "Ambient light Brightness"
                        font.family: "Helvetica"
                        font.bold: true
                        font.pixelSize: 30
                        color: colorMain
                        anchors.horizontalCenter: parent.horizontalCenter
                        anchors.verticalCenter:parent.verticalCenter

                    }

                }




                Slider {
                    id: brightnessSlider
                    from: 0
                    to: 2
                    stepSize: 1
                    value: capsLockController.brightness
                    width: 200
                    onValueChanged: capsLockController.setBrightness(value)
                    anchors.horizontalCenter: parent.horizontalCenter
                }

                Rectangle{
                    id: temp_txt
                    width: 450
                    height: 50
                    color: "black"
                    border.color: colorGlow
                    radius: 5
                    anchors.horizontalCenter: parent.horizontalCenter
                    Text {
                        text: "Engine Temperature: " + capsLockController.cpuTemperature
                        font.family: "Helvetica"
                        font.bold: true
                        font.pixelSize: 30
                        color: colorMain
                        anchors.horizontalCenter: parent.horizontalCenter
                        anchors.verticalCenter:parent.verticalCenter

                    }

                }
                Rectangle{
                    id: batt_txt
                    width: 300
                    height: 50
                    color: "black"
                    border.color: colorGlow
                    radius: 5
                    anchors.horizontalCenter: parent.horizontalCenter
                    Text {
                        text: "Battery Level: " + capsLockController.batteryLevel
                        font.family: "Helvetica"
                        font.bold: true
                        font.pixelSize: 30
                        color: colorMain
                        anchors.horizontalCenter: parent.horizontalCenter
                        anchors.verticalCenter:parent.verticalCenter

                    }

                }


                Button {
                    text: "Logout"
                    font.family: "Helvetica"
                    font.bold: true
                    onClicked: stackView.pop()
                    width: 120
                    height: 40
                    font.pixelSize: 16
                    anchors.horizontalCenter: parent.horizontalCenter
                    background: Rectangle {
                        color: "#900"
                        radius: 10
                    }
                }
            }
        }
    }
}



