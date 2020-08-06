import serial
import time
import sys

def voltage_state():

    counter = 0
    data_list = []
    ser = serial.Serial('/dev/ttyUSB0', 9600, timeout=1)
    ser.flush()

    while counter < 3:
        if ser.in_waiting > 0:
            voltage = ser.readline().decode('utf-8').rstrip()
            counter += 1
            time.sleep(2.0)

    return voltage