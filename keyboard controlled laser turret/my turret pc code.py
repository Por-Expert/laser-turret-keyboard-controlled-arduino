#keyboard,pyserial
import keyboard,serial
turret=serial.Serial('com5', 9600)
while True:
    if keyboard.is_pressed("w"):
        turret.write(b'f')
    elif keyboard.is_pressed("s"):
        turret.write(b'b')
    elif keyboard.is_pressed("d"):
        turret.write(b'r')
    elif keyboard.is_pressed("a"):
        turret.write(b'l')
    else:
        turret.write(b's')