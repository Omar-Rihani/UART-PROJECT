# Arduino Master-Slave Communication with Button and LED Control

## Overview

This project demonstrates serial communication between a master and a slave Arduino. The master Arduino reads the state of a button and sends the state to the slave Arduino. The slave Arduino controls an LED based on the received button state.

## Components Required

- 2 Arduino Boards (e.g., Arduino Uno)
- Push Button
- LED
- Jumper wires
- Breadboard (optional)

### Master Wiring

1. **Button**:
   - Connect one terminal of the button to pin 8 of the master Arduino.
   - Connect the other terminal to GND.

### Slave Wiring

1. **LED**:
   - Connect the anode (long leg) of the LED to pin 8 of the slave Arduino.
   - Connect the cathode (short leg) of the LED to GND.

### Serial Connection

- Connect the `TX` pin of the master Arduino to the `RX` pin of the slave Arduino.
- Connect the `RX` pin of the master Arduino to the `TX` pin of the slave Arduino.
- Connect GND of both Arduinos together.

## Code Explanation

The project consists of two main parts: the **master** code and the **slave** code.

### Master Code

The master Arduino is responsible for reading the button state:

- Initializes serial communication at 9600 baud.
- Sets the button pin (pin 8) as an input.
- In the loop, it continuously reads the button state and prints it to the serial monitor.

### Slave Code

The slave Arduino controls the LED based on the received data from the master:

- Initializes serial communication at 9600 baud.
- Sets the LED pin (pin 8) as an output.
- In the loop, it checks for incoming data on the serial port. 
- It echoes the received data back and controls the LED based on the received data:
  - Turns ON the LED if the received data is `'1'`.
  - Turns OFF the LED if the received data is `'0'`.

## Usage

1. Upload the master code to one Arduino and the slave code to the other.
2. Connect the components as described above.
3. Open the serial monitor on the master Arduino to view the button state.
4. Press the button to send the state to the slave Arduino, which will control the LED accordingly.

## Notes

- Ensure that the serial communication baud rates are the same on both Arduinos.
- You can modify the LED control logic in the slave code to suit your needs.

## Troubleshooting

- If the LED does not respond as expected, check the wiring and ensure that the correct pins are used.
- Verify that the button is functioning properly and that the serial connection is established correctly.

## License

This project is open-source and can be modified and shared under the MIT License.
