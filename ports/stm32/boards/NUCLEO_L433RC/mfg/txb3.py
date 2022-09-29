import pyb, time

import collections

import fifo

class c_host:
    
    def __init__(self):
        self.uart = pyb.UART(3, 115200)
        self.queue = fifo.BytesFIFO(1024)
        self.line = bytearray()


    def loop(self):
        r = self.uart.read();

        if r == None:
            return

        self.queue.write(r);

        while not self.queue.empty():
            c = self.queue.read(1)
            if c == b'\r' or c == b'\n':
                seg = bytes(self.line).split(b' ')
                print(seg)


                self.line = bytearray()
                continue
            else:
                self.line.append(ord(c))
                continue




host = c_host()

while True:
    host.loop()
    time.sleep(0.5)




# import pyb, time

# import collections

# queue = collections.deque((), 128)

# line = bytearray()

# pc = pyb.UART(1, 115200)
# rx = pyb.UART(3, 115200)

# while 1:
#     pc.write('hello\r\n')
#     pc.read(5) # read up to 5 bytes
#     rx.write('hello1\r\n')
#     r = rx.read()
#     if r != None:
#         queue.append(r)
    
#     try:
#         r = queue.popleft()

#         c = r[0]
        
#         try:
#             line
#         except NameError:
#             line = bytearray()
        
#         line.append(c)

        
#         if c == ord('\r'):
#             print('Helloxxxx there %s' % line)
#             del line
            


#     except IndexError:
#         pass
        



#     time.sleep(0.5)  #wait 0.5s
