import pyb, time

import collections

class c_host:
    
    def __init__(self):
        self.uart = pyb.UART(3, 115200)
        self.queue = bytearray()
        self.line = bytearray()



    def loop(self):
        r = self.uart.read()

        if r == None:
            return

        self.queue += bytearray(r)

        # print('xxxx %s' % self.queue)

        self.queue = bytearray("abcd\nefgh")

        
        while True:

            r = bytes(self.queue).splitlines(True)

            print(r[0], len(r[0]))
            print(r[1], len(r[1])) 

            if len(r) == 0:
                break

            # check last byte for new line
            if r[0][-1] == ord('\r') or r[0][-1] == ord('\n'):
                


                self.line = r[0]

                # print(r)

                self.queue = self.queue.pop(len(r[0]))
                print('xxx4 %s' % self.line)
            else:
                break




        
        # self.queue = bytearray(r)
        
        #self.queue = r


        #print("xxxx", r[0])

        #b = bytes(self.queue)
        
        #r = b.split(b'\n')
        
        # print("xxx: ", r[0])

        while True:

            # r = self.queue.split(b'\n')
            
            # r = self.queue.split(b'\n')

            # line = r.popleft()

            # print('Helloxxxx there %s' % self.line)



            # # print('xxx1 %s' % bytes(r))
            # a = bytes(r)
            # print("xxx1 ", r)
            # print("xxx2 ", bytes(r))
            # print("xxx3 ", a)

            # c = r[0]

            # try:
            #     self.line
            # except AttributeError:
            #     self.line = bytearray()
            #     pass
            

            # if c == ord('\r'):
            #     print('Helloxxxx there %s' % self.line)
            #     del self.line
            break






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
