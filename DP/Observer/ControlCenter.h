/*
 * ControlCenter.h
 *
 *  Created on: 2013-4-8
 *      Author: Administrator
 */

#ifndef CONTROLCENTER_H_
#define CONTROLCENTER_H_

#include "Observer.h"

#include <vector>
#include <string>
#include <algorithm>

#include <string>

class ControlCenter
{
public:
	ControlCenter(std::string name);
	virtual~ ControlCenter();

	void join(Observer * );
	void quit(Observer * );

	virtual void notifyObserver(std::string & name)  = 0;

protected:
	std::vector<Observer *> players;
	std::string name;
};

ControlCenter::ControlCenter(std::string n):name(n)
{
	std::cout << name << "创建成功." << std::endl;
}

ControlCenter::~ControlCenter(){}

void ControlCenter::join(Observer * obs)
{
	players.push_back(obs);
	std::cout << obs->getName() << " 加入"  << name << std::endl;
}

void ControlCenter::quit(Observer * obs)
{
	std::vector<Observer *>::iterator itr;
	itr = find(players.begin(), players.end(), obs);
	if(itr != players.end())
	{
		players.erase(itr);
		//players.erase(remove(players.begin(), players.end(), obs));

		std::cout << obs->getName() << "退出 " << name << std::endl;
	}
}

#endif /* CONTROLCENTER_H_ */
