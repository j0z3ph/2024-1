import pyfirmata
import time
import inspect

if not hasattr(inspect, 'getargspec'):
    inspect.getargspec = inspect.getfullargspec


board = pyfirmata.Arduino('/dev/cu.usbmodem14201')

while True:
    board.digital[12].write(1)
    time.sleep(1)
    board.digital[12].write(0)
    time.sleep(1)
