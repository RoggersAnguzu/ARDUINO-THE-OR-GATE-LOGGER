# ARDUINO-THE-OR-GATE-LOGGER
This a an Arduino Bases system that works as an Or Gate Logger for a Motor and a LED Display
Arduino OR Gate Logger.
![image](https://github.com/RoggersAnguzu/ARDUINO-THE-OR-GATE-LOGGER/assets/141458053/cf64e71a-822e-4068-bd01-a576bf6dbbcf)
![image](https://github.com/RoggersAnguzu/ARDUINO-THE-OR-GATE-LOGGER/assets/141458053/ed1cbc97-aef7-4689-bb30-3ff35849e340)
# Description:
This Arduino program reads values from various pins and uses them to control an OR gate. The program then logs these values to the serial monitor.

# Setup:
Connect the appropriate sensors or variables to pins 3 and 2 for analog inputs.
Connect the output of the OR gate to pin 4.
Connect the appropriate sensors or variables to pins 6 and 8 for digital inputs.
Connect another output of the OR gate to pin 5.
Code Explanation:
The program begins by setting the mode of pins 6, 8, 4, and 5 in the setup() function. Pins 6 and 8 are set as INPUT, and pins 4 and 5 are set as OUTPUT.

In the loop() function, the program reads analog values from pins 3 and 2, prints them to the serial monitor, and uses them as inputs to an OR gate. The output of the OR gate is then written to pin 4.

The program also reads digital values from pins 6 and 8, prints them to the serial monitor, and uses them as inputs to an OR gate. The output of the OR gate is then written to pin 5.

The delay() function is used to create a pause in the program, allowing the output to be seen on the serial monitor and the OR gate to be simulated.
