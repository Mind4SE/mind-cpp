/*
 * led.hpp
 *
 *  Created on: 20 mars 2014
 *      Author: SESA188919
 */

#ifndef LED_HPP_
#define LED_HPP_

#include "led.itf.hpp"

class led : public ledItf {
protected:
public:
	virtual void led01On();
	virtual void led01Off();
	virtual void led02On();
	virtual void led02Off();
};

#endif /* LED_HPP_ */
