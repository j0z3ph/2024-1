from PyQt6 import QtGui
from PyQt6.QtWidgets import QMainWindow
from Ui_ventana import *
import sys
from PyQt6.QtCore import QThread, pyqtSignal
import pyfirmata
import time
import inspect

class ThreadLeeBotones(QThread):
    done = pyqtSignal(int)
    # 1 - Boton 1 (pin 8)
    # 2 - Boton 2 (pin 9)
    
    running = True
    def __init__(self):
        super().__init__()

    def run(self):
        lastBtn1 = False
        lastBtn2 = False
        while self.running:
            btn1 = board.digital[8].read()
            btn2 = board.digital[9].read()
            if btn1 is True and lastBtn1 is False:
                self.done.emit(1)
            if btn2 is True and lastBtn2 is False:
                self.done.emit(2)
            lastBtn1 = btn1
            lastBtn2 = btn2
            time.sleep(0.1)
        
    def stop(self):
        self.running = False
        self.wait()
        

class MainWindow(QMainWindow, Ui_MainWindow):
    def __init__(self, *args, **kwargs):
        QMainWindow.__init__(self, *args, **kwargs)
        self.setupUi(self)
        self.ThreadBotones = ThreadLeeBotones()
        self.ThreadBotones.done.connect(self.btnEvento)
        self.ThreadBotones.start()
    
    def btnEvento(self, btn):
        print(btn)
        cadena = "Boton " + str(btn)
        self.lblMensaje.setText(cadena)
        
    def closeEvent(self, event):
        self.ThreadBotones.stop()
        event.accept()
        
     
if __name__ == "__main__":
    
    if not hasattr(inspect, 'getargspec'):
        inspect.getargspec = inspect.getfullargspec

    board = pyfirmata.Arduino('/dev/cu.usbmodem14201')

    it = pyfirmata.util.Iterator(board)
    it.start()
    time.sleep(0.5)

    board.digital[8].mode = pyfirmata.INPUT # Boton 1
    board.digital[9].mode = pyfirmata.INPUT # Boton 2

    
    app = QtWidgets.QApplication(sys.argv)
    window = MainWindow()
    window.show()
    sys.exit(app.exec())