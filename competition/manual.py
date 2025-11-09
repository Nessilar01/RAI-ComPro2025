import time  

import mbot2  

import gamepad  

import cyberpi  

from cyberpi import *  

servo1 = 90  

servo2 = 90 

servo3 = 90 

 

while True:  

 

if gamepad.is_key_pressed('R1'): 

speed1 = gamepad.get_joystick('Ly') 

turn1 = gamepad.get_joystick('Rx') 

leftpower = (turn1 +speed1 )*2 

rightpower = (turn1 -speed1)*2 

mbot2.drive_power(leftpower,rightpower) 

elif servo1 > 180: 

servo1 = 180  

elif servo1 < 0:  

servo1 = 0  

elif servo2 > 180: 

servo2 = 180  

elif servo2 < 0:  

servo2 = 0  

elif servo3 > 360: 

servo3 = 360  

elif servo3 < 0:  

servo3 = 0  

elif gamepad.is_key_pressed('Up'):  

servo1 -= 20 

cyberpi.console.println("servo: " + str(servo1))  

mbot2.servo_set(servo1, 'S2')  

time.sleep(0.1) 

elif gamepad.is_key_pressed('Down'):  

servo1 += 20 

cyberpi.console.println("servo: " + str(servo1))  

mbot2.servo_set(servo1, 'S2')  

time.sleep(0.1) 

elif gamepad.is_key_pressed('Left'):  

servo2 += 20 

cyberpi.console.println("servo: " + str(servo2))  

mbot2.servo_set(servo2, 'S1')  

time.sleep(0.1) 

elif gamepad.is_key_pressed('Right'): 

servo2 -= 20 

cyberpi.console.println("servo: " + str(servo2))  

mbot2.servo_set(servo2, 'S1')  

time.sleep(0.1) 

elif gamepad.is_key_pressed('N2'): 

mbot2.motor_set(255, 'M2') 

mbot2.motor_set(-255, 'M1') 

elif gamepad.is_key_pressed('N4'): 

mbot2.motor_stop('M1')  

mbot2.motor_stop('M2')  

elif gamepad.is_key_pressed('N1'): 

servo3 += 10  

cyberpi.console.println("servo: " + str(servo3))  

mbot2.servo_set(servo3, 'S4')  

time.sleep(0.1) 

elif gamepad.is_key_pressed('N3'): 

servo3 -= 10 

cyberpi.console.println("servo: " + str(servo3))  

mbot2.servo_set(servo3, 'S4')  

time.sleep(0.1) 

else:  

time.sleep(0.01) 