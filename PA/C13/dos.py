import pyfirmata
import time
import inspect

if not hasattr(inspect, 'getargspec'):
    inspect.getargspec = inspect.getfullargspec

board = pyfirmata.Arduino('/dev/cu.usbmodem14201')

it = pyfirmata.util.Iterator(board)
it.start()

board.digital[10].mode = pyfirmata.INPUT

while True:
    sw = board.digital[10].read()
    if sw is True:
        board.digital[12].write(1)
    else:
        board.digital[12].write(0)
    time.sleep(0.1)
    