# DS18B20 Temperature Sensor Project

## Overview

This project utilizes the DS18B20 digital temperature sensor to measure temperature and display the readings in both Celsius and Fahrenheit. Additionally, an LED is used to indicate when the temperature exceeds a predefined threshold (35°C in this case).

## Components Used

- DS18B20 Temperature Sensor
- Arduino Board
- LED
- Resistor (4.7kΩ pull-up for 1-Wire communication)
- Connecting wires

## Block Diagram
![Image](https://github.com/user-attachments/assets/74a4f1b9-d5ac-45a2-aa38-141f3128c85e)
![Image](https://github.com/user-attachments/assets/8574ee42-43ec-486d-8817-705c7c53e6b6)


## Features
- Reads temperature using the DS18B20 sensor.
- Displays temperature readings in both Celsius and Fahrenheit.
- Uses an LED to indicate when the temperature exceeds a threshold.
- Supports both parasitic and external power modes.

## DS18B20 Sensor Details
The DS18B20 has four main data components:
- 64-bit Lasered ROM: Unique identifier for each sensor.
- Temperature Sensor: Measures temperature with high precision.
- Non-volatile Temperature Alarm Triggers: TH (Temperature High) and TL (Temperature Low) set temperature limits.
- Configuration Register: Configurable settings for resolution and alarms.

The device operates through the 1-Wire communication protocol. It can draw power from the data line (parasitic mode) or be powered externally with a 3V to 5.5V supply.

## Arduino Code Functionality
- Initializes the DS18B20 sensor.
- Continuously reads temperature values.
- Converts and prints the values to the Serial Monitor.
- Turns on an LED if the temperature exceeds 35°C.
- Waits for a delay before taking the next reading.
