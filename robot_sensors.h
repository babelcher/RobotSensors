#include <msp430g2553.h>
/*
 * robot_sensors.h
 *
 *  Created on: Dec 5, 2013
 *      Author: C15Brandon.Belcher
 */

#ifndef ROBOT_SENSORS_H_
#define ROBOT_SENSORS_H_

void InitializeADC10();

unsigned int LeftSensorReading();

unsigned int RightSensorReading();

unsigned int CenterSensorReading();


#endif /* ROBOT_SENSORS_H_ */
