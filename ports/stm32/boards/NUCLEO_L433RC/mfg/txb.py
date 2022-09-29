import pyb, time

import collections
import fifo
import time


console_echo = True

uart3 = pyb.UART(3, 921600)
uart3_fifo = fifo.BytesFIFO(1024)
uart3_line = bytearray()

uart1 = pyb.UART(1, 115200)
uart1_fifo = fifo.BytesFIFO(128)
uart1_line = bytearray()


class c_protocol_ascii:
    
    def __init__(self, io):
        self.io = io
        self.fifo = fifo.BytesFIFO(1024)
        self.line = bytearray()

        self.echo = True


    def decode(self, line):
        s = bytes(line).split(b' ')
        print(line.decode())

        if bytes(line).startswith("echo"):
            global console_echo 
            console_echo = not console_echo
        elif bytes(line).startswith("uart 1 o "):
            uart1.write(bytes(line)[len("uart 1 o "):] + bytearray(b'\n'))
        else:
            pass

    def encode():
        pass


    def console(self):
        pass
    
    def loop(self):
        r = self.io.read()

        if not r == None:

            self.fifo.write(r)

            while not self.fifo.empty():
                c = self.fifo.read(1)

                if self.echo == True:
                    print(c.decode(), end='')
                    self.io.write(c)

                self.line.append(ord(c))

                if c == b'\r' or c == b'\n':
                    self.decode(self.line)
                    self.line = bytearray()   


            # uart 1
            r = uart1.read()
            if not r == None:
                uart3.write(bytearray("uart 1 i ") + r + bytearray(b'\n'))



protocol_ascii = c_protocol_ascii(uart3)


while True:

    protocol_ascii.loop()


    time.sleep(5/1000)


