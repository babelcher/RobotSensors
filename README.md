Lab7
====

Library for interfacing with the sensors on the robot in ECE 382.

## Functions

- `void InitializeADC10()`
  - Sets up the ADC10 subsystem

- `unsigned int LeftSensorReading()`
  - Takes a voltage reading of the left sensor and returns an unsigned int

- `unsigned int RightSensorReading()`
  - Takes a voltage reading of the right sensor and returns an unsigned int

- `unsigned int CenterSensorReading()`
  - Takes a voltage reading of the center sensor returns an unsigned int


## Notes
The example code creates unsigned variables based on the readings of the sensors.

## Documentation Statement
C2C Ryan Turner helped me debug my code and came to the conclusion that I was using = instead of |=. Capt Branchflower also pointed out that I was not calling InitializeADC10() in my example.c.
