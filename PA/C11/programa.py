import typing
from PyQt6 import QtCore
from Ui_calculadora import *
from PyQt6.QtWidgets import QMainWindow, QMessageBox, QWidget
import sys


class MainWindow(QMainWindow, Ui_MainWindow):
    def __init__(self, *parent, **flags) -> None:
        super().__init__(*parent, **flags)
        self.setupUi(self)
        self.pushButton_13.clicked.connect(self.setNumber)
        
    def setNumber(self):
        if self.lbl_res.text() == "0":
            self.lbl_res.setText("1")
        else:
            self.lbl_res.setText(self.lbl_res.text() + "1")
    
    

if __name__ == "__main__":
    app = QtWidgets.QApplication(sys.argv)
    window = MainWindow()
    window.show()
    sys.exit(app.exec())