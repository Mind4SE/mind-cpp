/*
 * sensor.hpp
 *
 *  Created on: 19 mars 2014
 *      Author: SESA188919
 */

#ifndef SENSOR_HPP_
#define SENSOR_HPP_

#include "sensor.itf.hpp"

class sensor: public sensorItf {
protected:
public:
	/** sensorItf methods */
	virtual int getSensorType();

	virtual void switchOn();

	virtual void switchOff();

	virtual void reset();
};

#endif /* SENSOR_HPP_ */
