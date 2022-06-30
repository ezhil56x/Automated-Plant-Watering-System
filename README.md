# Automated Plant Watering System

The main purpose of this **Automated Plant Watering System** is to water the plants automatically whenever the soil not wet

## Materials Required

1. Arduino Uno R3
2. 18W Submersible Water Pump
3. Soil Moisture Sensor
4. 4 Channel Relay
5. Jumper Wires
6. Potted Plant
7. Hose Pipe

## Software

1. [Arduino IDE](https://www.arduino.cc/en/software)

## Procedure

1. Connect the VCC on the Soil Moisture Sensor to 5V in Arduino UNO R3
2. Connect the GND on the Soil Moisture Sensor to GND in Arduino UNO R3
3. Connect the DO on the Soil Moisture Sensor to 2 in Arduino UNO R3
4. Connect the 4 on the Arduino Uno R3 to IN1 in the 4 Channel Relay
5. Connect the GND on the Arduino Uno R3 to GND in the 4 Channel Relay
6. Connect the Negative End of the Pump to power supply
7. Connect the Poitive End of the Pump to Relay 1 Normally Closed (NC)
8. Take a Red Wire and connect one end of the wire to the Relay 1 Normally Open (NO) and another end to the power supply along with the wire referred in Step 6
9. Connect the Arduino Uno R3 to your PC with USB cable
10. Open Arduino IDE, copy the Source Code
11. In the menu bar choose Tools and choose Board as Arduino Uno and choose the appropriate port number
12. Then, at the very left of the navigation bar, there is a checkmark and an arrow pointing right. The checkmark is used to verify, and the arrow is used to upload.
13. When the process is completed, you can see Compilation complete and Upload complete in the console window
14. After this submerge the Water Pump in water and connect the Soil Moisture Sensor in the soil
15. The **Automated Plant Watering System** is ready to use !
