import typing
from PyQt6 import QtCore
from Ui_mi_ventana import *
from PyQt6.QtWidgets import QMainWindow, QMessageBox, QWidget
import sys


class MainWindow(QMainWindow, Ui_MainWindow):
    def __init__(self, *parent, **flags) -> None:
        super().__init__(*parent, **flags)
        self.setupUi(self)
        self.pushButton.clicked.connect(self.mensage)
        
        
    def mensage(self):
        msg = QMessageBox(self)
        msg.setWindowTitle("Mensaje")
        msg.setIcon(QMessageBox.Icon.Information)
        msg.setText("Saludos")
        msg.setInformativeText(f"Hola {self.lbl_nombre.text()}")
        msg.setDetailedText("Saluditos")
        msg.setStandardButtons(QMessageBox.StandardButton.Ok)
        res = msg.exec()
        print(res)


if __name__ == "__main__":
    app = QtWidgets.QApplication(sys.argv)
    window = MainWindow()
    window.show()
    sys.exit(app.exec())
