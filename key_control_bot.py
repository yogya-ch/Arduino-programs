import serial
import time

ard=serial.Serial("/dev/cu.usbmodem11",9600)

#ard.open()

def move(direction):
    if direction==ord("w"):
        ard.write('1')
    elif direction==ord("a"):
        ard.write('2')
    elif direction==ord("d"):
        ard.write('3')
    elif direction==ord("s"):
        ard.write('4')
    elif direction==ord("q"):
        ard.write('5')
    else:
        ard.close()

key=raw_input("enter the direction ")


while key!="x":
    new_key=raw_input("enter the direction ")
    key = key if new_key == -1 else new_key
    move(ord(key))
