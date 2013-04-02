/*
 * MembraneDecoratorPhone.h
 *
 *  Created on: 2013-4-2
 *      Author: Administrator
 */

#ifndef MEMBRANEDECORATORPHONE_H_
#define MEMBRANEDECORATORPHONE_H_

#include "DecoratorPhone.h"

class MembraneDecoratorPhone:public DecoratorPhone
{
public:
	MembraneDecoratorPhone(Phone* phone):DecoratorPhone(phone){}
	~MembraneDecoratorPhone(){}

	void display();

private:
	void addMembrane();
};

void MembraneDecoratorPhone::display()
{
	DecoratorPhone::display();
	addMembrane();
}

void MembraneDecoratorPhone::addMembrane()
{
	std::cout << "ÊÖ»úÌùÄ¤." << std::endl;
}




#endif /* MEMBRANEDECORATORPHONE_H_ */
