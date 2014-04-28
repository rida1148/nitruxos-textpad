// DocumentFileDialog.qml
import QtQuick 2.0
import QtQuick.Dialogs 1.0

Item {
    id: root
    property alias title: qmlFileDialog.title
    property alias fileUrl: qmlFileDialog.fileUrl
    property alias fileUrls: qmlFileDialog.fileUrls

    signal accepted()
    signal rejected()

    function open() { qmlFileDialog.open() }
    function close() { qmlFileDialog.close() }

    FileDialog {
        id: qmlFileDialog
        modality: Qt.WindowModal
        nameFilters: ["Text File (*.txt *.rtf *.html *.h *.cpp)"]

        onAccepted: root.accepted()
        onRejected: root.rejected()
    }
}
