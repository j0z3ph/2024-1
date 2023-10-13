import typing
from PyQt6 import QtCore
from PyQt6.QtWidgets import QMainWindow, QWidget
from Ui_dialogo import *
from Ui_main import *
import sys

class MainWindow(QMainWindow, Ui_MainWindow):
    def __init__(self, *parent, **flags) -> None:
        super().__init__(*parent, **flags)
        self.setupUi(self)
        
if __name__ == "__main__":
    app = QtWidgets.QApplication(sys.argv)
    window = MainWindow()
    window.show()
    sys.exit(app.exec())
