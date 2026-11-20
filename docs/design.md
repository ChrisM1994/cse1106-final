
# Smart Classroom Comfort Monitor
## System Design

### Project Overview
This program monitors classroom temperatures using
a Raspberry Pi and the C programming language.

### Program Operation
1. Start the program.
2. Set the acceptable temperature range to 68-76 F.
3. Ask the user to enter a temperature in Fahrenheit.
4. Compare the temperature with the acceptable range.
5. Display NORMAL if the temperature is within range.
6. Display WARNING if the temperature is outside range.
7. Turn the red LED ON for WARNING and OFF for NORMAL.
8. Save the temperature and status to a CSV file.
9. Update the average of recorded temperatures.
10. Allow the user to enter another temperature,
    change the acceptable range, or exit.

### Hardware Design
- Raspberry Pi 4B
- GPIO 17 (physical pin 11)
- Red LED
- 1,000-ohm resistor
- Breadboard and jumper wires
- Ground connection (physical pin 6)

### Data Storage
Temperature readings and statuses will be saved
in data/temperature_log.csv.

The current system status will be saved
in status.txt.

### Flowchart

Start
  |
Set default range (68-76 F)
  |
Display menu
  |
Choose action
  |
  +-- Enter temperature
  |      |
  |   Compare with range
  |      |
  |   NORMAL or WARNING
  |      |
  |   Update LED
  |      |
  |   Save data and update average
  |      |
  |   Return to menu
  |
  +-- Change acceptable range
  |      |
  |   Return to menu
  |
  +-- View average
  |      |
  |   Return to menu
  |
  +-- Exit program
         |
      Turn LED OFF
         |
        End
  
