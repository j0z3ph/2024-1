import typing
from PyQt6 import QtCore, QtGui
from Ui_calculadora import *
from PyQt6.QtWidgets import QMainWindow, QMessageBox, QWidget
from PyQt6.QtGui import QKeyEvent
import sys


class MainWindow(QMainWindow, Ui_MainWindow):
    def __init__(self, *parent, **flags) -> None:
        super().__init__(*parent, **flags)
        self.setupUi(self)
        
        self.pushButton_13.clicked.connect(self.numberPressed)
        self.pushButton_4.clicked.connect(self.numberPressed)
        self.pushButton_14.clicked.connect(self.numberPressed)
        self.pushButton_9.clicked.connect(self.numberPressed)
        self.pushButton_10.clicked.connect(self.numberPressed)
        self.pushButton_2.clicked.connect(self.numberPressed)
        self.pushButton_15.clicked.connect(self.numberPressed)
        self.pushButton_6.clicked.connect(self.numberPressed)
        self.pushButton_11.clicked.connect(self.numberPressed)
        self.pushButton_17.clicked.connect(self.numberPressed)
        
        self.pushButton_18.clicked.connect(self.decimal_point)
        
    def keyPressEvent(self, event: QKeyEvent) -> None:
        super().keyPressEvent(event)
        if event.key() == QtCore.Qt.Key.Key_1:
            self.setNumber("1")
        if event.key() == QtCore.Qt.Key.Key_2:
            self.setNumber("2")
        if event.key() == QtCore.Qt.Key.Key_3:
            self.setNumber("3")
        if event.key() == QtCore.Qt.Key.Key_4:
            self.setNumber("4")
        if event.key() == QtCore.Qt.Key.Key_5:
            self.setNumber("5")
        if event.key() == QtCore.Qt.Key.Key_6:
            self.setNumber("6")
        if event.key() == QtCore.Qt.Key.Key_7:
            self.setNumber("7")
        if event.key() == QtCore.Qt.Key.Key_8:
            self.setNumber("8")
        if event.key() == QtCore.Qt.Key.Key_9:
            self.setNumber("9")
        if event.key() == QtCore.Qt.Key.Key_0:
            self.setNumber("0")
        if event.key() == QtCore.Qt.Key.Key_Period:
            self.decimal_point()
            
    def numberPressed(self):
        number = self.sender().text()
        self.setNumber(number)
        
    def decimal_point(self):
        if self.lbl_res.text().find(".") == -1:
            self.lbl_res.setText(self.lbl_res.text() + ".")
         
    def setNumber(self, number: str):
        str_number = self.lbl_res.text() + number
        numeric_value = float(str_number)
        f = lambda x: int(x) if x.is_integer() else x
        self.lbl_res.setText(str(f(numeric_value)))
   
    

if __name__ == "__main__":
    app = QtWidgets.QApplication(sys.argv)
    window = MainWindow()
    window.show()
    sys.exit(app.exec())
