#include <msp430g2553.h>

/*
 * main.c
 */
int main(void) {
	WDTCTL = WDTPW | WDTHOLD;	// Stop watchdog timer

	InitializeADC10();

	unsigned int leftVoltage = LeftSensorReading();
	unsigned int rightVoltage = RightSensorReading();
	unsigned int frontVoltage = CenterSensorReading();

	return 0;
}

