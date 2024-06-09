import QtQuick 2.12
import QtQuick.Window 2.12




Window {
    visible: true
    MainForm {
        anchors.fill: parent
        mouseArea.onClicked: {
            topRect.visible = !topRect.visible
        }
    }
}

//Window {
//    visible: true
//    MainForm {
//        anchors.fill: parent
//        mouseArea.onClicked: {
//            //Qt.quit();
//            topRect.visible = !topRect.visible

//        }

//    }
//}
