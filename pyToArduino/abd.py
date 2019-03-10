import serial
import time
arduino = serial.Serial('/dev/cu.usbmodem1421', 9600, timeout=5)
time.sleep(1)
print("starting")
con=1
arduino.flush()
while 1:
    if(con==1):
        data=arduino.readline()
        time.sleep(1)
        print (data)
        con=con+1
    time.sleep(1)
    if(con==2):
        var=str("insifgfv").encode()
        arduino.write(var)
        time.sleep(2)        
