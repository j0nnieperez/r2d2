import ev3dev.ev3 as ev3
from time import sleep
import functions as FN
from random import randint

ColorS      = ev3.ColorSensor()             # Sensor de color
GyroS       = ev3.GyroSensor()              # Sensor Giroscopio
ProxS       = ev3.UltrasonicSensor('in3')        # Sensor Ultrasonico (proximidad)
ProxLS      = ev3.UltrasonicSensor('in4')       # Sensor Ultrasonico de arriba(proximidad)

MotorL      = ev3.LargeMotor('outA')        # Motor izquierdo
MotorR      = ev3.LargeMotor('outD')        # Motor derecho

FN.LoadMotors(MotorL, MotorR)
FN.LoadSensors(ColorS, ProxS, ProxLS, GyroS)

BaseColors  = ['NoneColor', 'White', 'Brown', 'Blue']
Finish = True
LastBackPosition = None

def Stop():
    return MotorL.stop(), MotorR.stop()

while Finish:
    Color = FN.GetColor(ColorS.value())
    print(Color)
    if(Color in BaseColors):
        FN.AdvanceAndFix()
    elif(not Color in BaseColors):
        FN.Turn(90)

        