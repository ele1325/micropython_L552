import pyb, time

import collections
import fifo

console_echo = True
uart3 = pyb.UART(3, 921600)
uart3_fifo = fifo.BytesFIFO(1024)
uart3_line = bytearray()

uart1 = pyb.UART(1, 115200)
uart1_fifo = fifo.BytesFIFO(128)
uart1_line = bytearray()


def protocol(line):
    s = bytes(line).split(b' ')
    print(line.decode())

    if bytes(line).startswith("echo"):
        global console_echo 
        console_echo = not console_echo
    elif bytes(line).startswith("uart 1 o "):
        uart1.write(bytes(line)[len("uart 1 o "):] + bytearray(b'\n'))
    else:
        pass



while True:

    # uart 3
    r = uart3.read()

    if not r == None:

        uart3_fifo.write(r)

        while not uart3_fifo.empty():
            c = uart3_fifo.read(1)

            if console_echo == True:
                # print(c.decode(), end='')
                uart3.write(c)

            uart3_line.append(ord(c))

            if c == b'\r' or c == b'\n':
                protocol(uart3_line)
                uart3_line = bytearray()


    # uart 1
    r = uart1.read()

    if not r == None:
        uart3.write(bytearray("uart 1 i ") + r + bytearray(b'\n'))





    time.sleep(5/1000)


