/*
 * ConcreteControlCenter.h
 *
 *  Created on: 2013-4-8
 *      Author: Administrator
 */

#ifndef CONCRETECONTROLCENTER_H_
#define CONCRETECONTROLCENTER_H_

#include "ControlCenter.h"

class ConcreteControlCenter:public ControlCenter
{
public:
	ConcreteControlCenter(std::string n):ControlCenter(n){}
	~ConcreteControlCenter(){}

	void notifyObserver(std::string & name);
};

void ConcreteControlCenter::notifyObserver(std::string & name)
{
	std::vector<Observer *>::iterator itr = players.begin();
	for(; itr != players.end(); ++itr)
	{
		if(name != (*itr)->getName())
		{
			(*itr)->help();
		}

	}
}


#endif /* CONCRETECONTROLCENTER_H_ */
