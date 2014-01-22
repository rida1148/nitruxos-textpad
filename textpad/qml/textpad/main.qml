import QtQuick 2.1
import QtQuick.Controls 1.0
import QtQuick.Layouts 1.1
import QtQuick.Window 2.1

ApplicationWindow {
    id: root
    visible: true
    width: 500
    minimumWidth: textArea.implicitWidth
    height: 360
    minimumHeight: textArea.implicitHeight
    title: "Textpad"


    TextArea {
        id: textArea
        anchors.top: parent.top
        anchors.topMargin: 8
        anchors.bottom: parent.bottom
        anchors.bottomMargin: 8
        anchors.left: parent.left
        anchors.leftMargin: 62
        anchors.right: parent.right
        anchors.rightMargin: 8
    }

    Rectangle {
        id: toolBar
        width: 48
        color: "#e6e6e6"
        anchors.top: parent.top
        anchors.topMargin: 8
        anchors.bottom: parent.bottom
        anchors.bottomMargin: 8
        anchors.left: parent.left
        anchors.leftMargin: 8

        Button {
            id: documentNew
            x: 8
            y: 8
            width: 32
            height: 32
            iconSource: "icons/document-open.svg"
            iconName: "document-open"
        }

        Button {
            id: documentOpen
            x: 8
            y: 46
            width: 32
            height: 32
            iconSource: "icons/document-save.svg"
            iconName: "document-save"
            DocumentFileDialog {
                id: saveFileDialog
                title: qsTr("Save to ...")
                onRejected: {
                    console.log("Canceled")
                }
                onAccepted: {
                    console.log("File selected: " + fileUrl)
                }
            }

            onClicked: {
                saveFileDialog.open()
            }
        }
    }
}
