import pyfirmata
import time
import inspect

if not hasattr(inspect, 'getargspec'):
    inspect.getargspec = inspect.getfullargspec
        
board=pyfirmata.Arduino('/dev/cu.usbmodem14201')

it = pyfirmata.util.Iterator(board)
it.start()

pin9 = board.get_pin('d:9:s') # s para servo
angle = 0

while True:
    pin9.write(angle)
    time.sleep(0.5)
    angle += 10
    if angle >= 180:
        angle = 0
