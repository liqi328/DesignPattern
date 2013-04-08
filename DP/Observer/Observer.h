/*
 * Observer.h
 *
 *  Created on: 2013-4-8
 *      Author: Administrator
 */

#ifndef OBSERVER_H_
#define OBSERVER_H_

#include "ControlCenter.h"

class ControlCenter;

#include <string>

class Observer
{
public:
	Observer(){}
	virtual~ Observer(){}

	virtual std::string getName()const = 0;
	virtual void help() = 0;
	virtual void beAttacked(ControlCenter * cc) = 0;
};

#endif /* OBSERVER_H_ */
