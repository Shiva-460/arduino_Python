
import serial
port="/dev/cu.usbmodem1421"#u can find port address from ardunio ide
rate=11200
s1=serial.Serial(port,rate)
#s1.flushInput()
while True:
    data=s1.readline()[:-2]
    if data:
             print(data)
