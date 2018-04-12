# -*- coding: utf-8 -*-

# Form implementation generated from reading ui file 'setup.ui'
#
# Created: Tue May 26 20:29:02 2015
#      by: PyQt4 UI code generator 4.11.3
#
# WARNING! All changes made in this file will be lost!

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

class Ui_ventanaPrincipal(object):
    def setupUi(self, ventanaPrincipal):
        ventanaPrincipal.setObjectName(_fromUtf8("ventanaPrincipal"))
        ventanaPrincipal.resize(270, 190) #(257, 176)
        ventanaPrincipal.setAutoFillBackground(False)
        ventanaPrincipal.setIconSize(QtCore.QSize(24, 24))
        ventanaPrincipal.setToolButtonStyle(QtCore.Qt.ToolButtonIconOnly)
        ventanaPrincipal.setTabShape(QtGui.QTabWidget.Rounded)
        self.centralwidget = QtGui.QWidget(ventanaPrincipal)
        self.centralwidget.setObjectName(_fromUtf8("centralwidget"))
        self.tabWidget = QtGui.QTabWidget(self.centralwidget)
        self.tabWidget.setGeometry(QtCore.QRect(0, 0, 261, 191))
        self.tabWidget.setObjectName(_fromUtf8("tabWidget"))
        self.tabOpciones = QtGui.QWidget()
        self.tabOpciones.setObjectName(_fromUtf8("tabOpciones"))
        self.label = QtGui.QLabel(self.tabOpciones)
        self.label.setGeometry(QtCore.QRect(10, 20, 46, 21))
        self.label.setObjectName(_fromUtf8("label"))
        self.normalButton = QtGui.QRadioButton(self.tabOpciones)
        self.normalButton.setEnabled(True)
        self.normalButton.setGeometry(QtCore.QRect(120, 10, 82, 17))
        self.normalButton.setChecked(True)
        self.normalButton.setObjectName(_fromUtf8("normalButton"))
        self.completaButton = QtGui.QRadioButton(self.tabOpciones)
        self.completaButton.setGeometry(QtCore.QRect(120, 30, 82, 17))
        self.completaButton.setObjectName(_fromUtf8("completaButton"))
        self.line = QtGui.QFrame(self.tabOpciones)
        self.line.setGeometry(QtCore.QRect(0, 60, 251, 16))
        self.line.setFrameShape(QtGui.QFrame.HLine)
        self.line.setFrameShadow(QtGui.QFrame.Sunken)
        self.line.setObjectName(_fromUtf8("line"))
        self.jugarButton = QtGui.QPushButton(self.tabOpciones)
        self.jugarButton.setGeometry(QtCore.QRect(170, 110, 75, 23))
        self.jugarButton.setObjectName(_fromUtf8("jugarButton"))
        self.line_2 = QtGui.QFrame(self.tabOpciones)
        self.line_2.setGeometry(QtCore.QRect(0, 90, 261, 16))
        self.line_2.setFrameShape(QtGui.QFrame.HLine)
        self.line_2.setFrameShadow(QtGui.QFrame.Sunken)
        self.line_2.setObjectName(_fromUtf8("line_2"))
        self.ayudaCheck = QtGui.QCheckBox(self.tabOpciones)
        self.ayudaCheck.setGeometry(QtCore.QRect(120, 70, 111, 31))
        self.ayudaCheck.setObjectName(_fromUtf8("ayudaCheck"))
        self.label_6 = QtGui.QLabel(self.tabOpciones)
        self.label_6.setGeometry(QtCore.QRect(10, 70, 46, 31))
        self.label_6.setObjectName(_fromUtf8("label_6"))
        self.tabWidget.addTab(self.tabOpciones, _fromUtf8(""))
        self.acercade = QtGui.QWidget()
        self.acercade.setObjectName(_fromUtf8("acercade"))
        self.label_2 = QtGui.QLabel(self.acercade)
        self.label_2.setGeometry(QtCore.QRect(40, 0, 201, 20))
        self.label_2.setObjectName(_fromUtf8("label_2"))
        self.label_3 = QtGui.QLabel(self.acercade)
        self.label_3.setGeometry(QtCore.QRect(40, 30, 201, 16))
        self.label_3.setObjectName(_fromUtf8("label_3"))
        self.label_4 = QtGui.QLabel(self.acercade)
        self.label_4.setGeometry(QtCore.QRect(60, 60, 141, 20))
        self.label_4.setObjectName(_fromUtf8("label_4"))
        self.label_5 = QtGui.QLabel(self.acercade)
        self.label_5.setGeometry(QtCore.QRect(236, 70, 20, 20))
        self.label_5.setObjectName(_fromUtf8("label_5"))
        self.tabWidget.addTab(self.acercade, _fromUtf8(""))
        ventanaPrincipal.setCentralWidget(self.centralwidget)
        self.statusbar = QtGui.QStatusBar(ventanaPrincipal)
        self.statusbar.setObjectName(_fromUtf8("statusbar"))
        ventanaPrincipal.setStatusBar(self.statusbar)

        self.retranslateUi(ventanaPrincipal)
        self.tabWidget.setCurrentIndex(0)
        QtCore.QMetaObject.connectSlotsByName(ventanaPrincipal)

    def retranslateUi(self, ventanaPrincipal):
        ventanaPrincipal.setWindowTitle(_translate("ventanaPrincipal", "Ajedrez", None))
        self.label.setText(_translate("ventanaPrincipal", "Pantalla:", None))
        self.normalButton.setText(_translate("ventanaPrincipal", "Normal", None))
        self.completaButton.setText(_translate("ventanaPrincipal", "Completa", None))
        self.jugarButton.setText(_translate("ventanaPrincipal", "Jugar", None))
        self.ayudaCheck.setText(_translate("ventanaPrincipal", "Marcas", None))
        self.label_6.setText(_translate("ventanaPrincipal", "Ayuda:", None))
        self.tabWidget.setTabText(self.tabWidget.indexOf(self.tabOpciones), _translate("ventanaPrincipal", "Opciones", None))
        self.label_2.setText(_translate("ventanaPrincipal", "<html><head/><body><p><span style=\" color:#ffaa00;\">Powered by Python, Pygame &amp; PyQt</span></p></body></html>", None))
        self.label_3.setText(_translate("ventanaPrincipal", "Desarrollado por grupo 02SC151", None))
        self.label_4.setText(_translate("ventanaPrincipal", "rodrigoalexismx@gmail.com", None))
        self.label_5.setText(_translate("ventanaPrincipal", "v2", None))
        self.tabWidget.setTabText(self.tabWidget.indexOf(self.acercade), _translate("ventanaPrincipal", "Acerca de", None))


if __name__ == "__main__":
    import sys
    app = QtGui.QApplication(sys.argv)
    ventanaPrincipal = QtGui.QMainWindow()
    ui = Ui_ventanaPrincipal()
    ui.setupUi(ventanaPrincipal)
    ventanaPrincipal.show()
    sys.exit(app.exec_())

