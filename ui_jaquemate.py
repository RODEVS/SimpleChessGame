# -*- coding: utf-8 -*-

# Form implementation generated from reading ui file 'jaquemate.ui'
#
# Created: Tue May 26 19:50:13 2015
#      by: PyQt4 UI code generator 4.11.3
#
# WARNING! All changes made in this file will be lost!
import sys
from PyQt4 import QtCore, QtGui

try:
    _fromUtf8 = QtCore.QString.fromUtf8
except AttributeError:
    def _fromUtf8(s):
        return s

try:
    _encoding = QtGui.QApplication.UnicodeUTF8
    def _translate(context, text, disambig):
        return QtGui.QApplication.translate(context, text, disambig, _encoding)
except AttributeError:
    def _translate(context, text, disambig):
        return QtGui.QApplication.translate(context, text, disambig)

class Ui_finJuego(object):
    def setupUi(self, finJuego):
        finJuego.setObjectName(_fromUtf8("finJuego"))
        finJuego.setWindowModality(QtCore.Qt.ApplicationModal)
        finJuego.resize(317, 103)
        finJuego.setAutoFillBackground(False)
        finJuego.setModal(False)
        self.label = QtGui.QLabel(finJuego)
        self.label.setGeometry(QtCore.QRect(30, 30, 251, 41))
        self.label.setObjectName(_fromUtf8("label"))

        self.retranslateUi(finJuego)
        QtCore.QMetaObject.connectSlotsByName(finJuego)

    def retranslateUi(self, finJuego):
        finJuego.setWindowTitle(_translate("finJuego", "Fin del Juego", None))
        self.label.setText(_translate("finJuego", "<html><head/><body><p align=\"center\"><span style=\" font-size:20pt; font-weight:600; color:#00557f;\">¡JAQUEMATE!</span></p></body></html>", None))

    def run(self):
        app = QtGui.QApplication(sys.argv)
        finJuego = QtGui.QDialog()
        self.setupUi(finJuego)
        finJuego.show()
        sys.exit(app.exec_())

if __name__ == "__main__":
    app = Ui_finJuego()
    app.run()

