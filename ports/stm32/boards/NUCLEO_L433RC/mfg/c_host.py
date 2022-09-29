
import pyb, time

import collections

class c_host:
    
    def __init__(self):
        self.uart = pyb.UART(1, 115200)
        self.queue = collections.deque((), 128)
        self.line = bytearray()



    def loop(self):
        r = uart.read();

        if r == None:
            return
        
        self.queue.append(r)
        
        while True:
            try:
                r = self.queue.popleft()
            except IndexError:
                return

            c = r[0]

            try:
                self.line
            except NameError:
                self.line = bytearray()
            

            self.line.append(c)           

            if c == ord('\r'):
                print('Helloxxxx there %s' % line)
                del line



