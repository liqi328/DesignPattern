/*
 * BoxDecoratorPhone.h
 *
 *  Created on: 2013-4-2
 *      Author: Administrator
 */

#ifndef BOXDECORATORPHONE_H_
#define BOXDECORATORPHONE_H_

#include "DecoratorPhone.h"

class BoxDecoratorPhone:public DecoratorPhone
{
public:
	BoxDecoratorPhone(Phone* p):DecoratorPhone(p){}
	~BoxDecoratorPhone(){}

	void display();

private:
	void addDecorator();
};

void BoxDecoratorPhone::display()
{
	DecoratorPhone::display();
	addDecorator();
}

void BoxDecoratorPhone::addDecorator()
{
	std::cout << "增加手机盒." << std::endl;
}


#endif /* BOXDECORATORPHONE_H_ */
