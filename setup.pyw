from PyQt4.QtCore import *
from PyQt4.QtGui import *
from ui_setup import Ui_ventanaPrincipal
from Ajedrez import *

class MainWindow(QMainWindow, Ui_ventanaPrincipal):
	def __init__(self, parent = None):
		QMainWindow.__init__(self, parent)
		self.setupUi(self)
		self.pantalla = None
		self.ayuda = False

	@pyqtSignature("")
	def on_normalButton_clicked(self):
		self.pantalla = "Normal"

	@pyqtSignature("")
	def on_completaButton_clicked(self):
		self.pantalla = "Completa"

	@pyqtSignature("")
	def on_ayudaCheck_clicked(self):
		if self.ayudaCheck.isChecked():
			self.ayuda = True
		else:
			self.ayuda = False
	
	@pyqtSignature("")
	def on_jugarButton_clicked(self):
		self.hide()
		iniciar = Ajedrez(screen = self.pantalla, help = self.ayuda)
		iniciar.loop()

if __name__ == '__main__':
	import sys
	app = QApplication(sys.argv)
	form = MainWindow()
	form.show()
	app.exec_()
	


