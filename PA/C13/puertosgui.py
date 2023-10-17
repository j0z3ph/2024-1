from PyQt6.QtWidgets import QMainWindow
from Ui_Puertos import *
import sys
import pyfirmata
import inspect

class MainWindow(QMainWindow, Ui_MainWindow):
    def __init__(self, *args, **kwargs):
        QMainWindow.__init__(self, *args, **kwargs)
        self.setupUi(self)
        self.horizontalSlider.valueChanged.connect(self.sendArduino)
        
    def sendArduino(self):
        slider_value = self.horizontalSlider.value() / 100
        led.write(slider_value)

if __name__ == "__main__":
    if not hasattr(inspect, 'getargspec'):
        inspect.getargspec = inspect.getfullargspec

    board = pyfirmata.Arduino('/dev/cu.usbmodem14201')

    it = pyfirmata.util.Iterator(board)
    it.start()

    led = board.get_pin('d:11:p')
    
    app = QtWidgets.QApplication(sys.argv)
    window = MainWindow()
    window.show()
    sys.exit(app.exec())
