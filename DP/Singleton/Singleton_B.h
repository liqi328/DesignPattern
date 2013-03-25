/*
 * Singleton_B.h
 *
 *  Created on: 2013-3-25
 *      Author: Administrator
 */

#ifndef SINGLETON_B_H_
#define SINGLETON_B_H_

#include <iostream>

class Singleton_B
{
public:
	static Singleton_B* getInstance()
	{
		if(NULL == instance)
		{
			instance = new Singleton_B();
		}
		return instance;
	}

	static void release()
	{
		if(NULL != instance)
		{
			delete instance;
			instance = NULL;
		}
	}

private:
	Singleton_B();
	virtual~ Singleton_B();
	Singleton_B(const Singleton_B&);
	Singleton_B& operator=(const Singleton_B&);

private:
	static Singleton_B * instance;
};

Singleton_B* Singleton_B::instance = NULL;

Singleton_B::Singleton_B()
{
	std::cout << "New Singleton_B." << std::endl;
}

Singleton_B::~Singleton_B()
{
	std::cout << "Delete Singleton_B." << std::endl;
}


#endif /* SINGLETON_B_H_ */
