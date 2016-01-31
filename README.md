# Smart-time-management-lamp
We have done a project that manages your time.
  When the ultrasonic sensor detects the distance of an object located closer than 40 centimeters after 4 seconds to eliminate false positives, Arduino includes a lamp. It is on 30 minutes when 30 minutes pass the lamp is switched off for 10 minutes, and this is repeated until the power is supplied.
  In our project we used: board Arduino UNO, the ultrasonic distance sensor, relay on the 5-volt of control and 220-volt of load lamp and 10 wires.
  The ultrasonic distance detector is aimed at a place where people will sit lamp located on the desktop.
  Our program works like this: the ultrasonic distance sensor receives and sends the data to the board Arduino after the Arduino handles data that is comparing the value obtained with 40 centimeters and if the distance is less than 40 centimeters of the signal is sent to relay and the relay turns on the lamp, after 30 minutes, the lamp turns off automaticallyand it does not work in 10 minutes. Then the process is repeated from the receipt of data from the sensor distance.
