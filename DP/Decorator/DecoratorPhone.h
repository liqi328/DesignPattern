/*
 * DecoratorPhone.h
 *
 *  Created on: 2013-4-2
 *      Author: Administrator
 */

#ifndef DECORATORPHONE_H_
#define DECORATORPHONE_H_

#include "Phone.h"

#include <string>

class DecoratorPhone:public Phone
{
public:
	DecoratorPhone(Phone* p):phone(p){}
	virtual ~DecoratorPhone(){}

	virtual void display()
	{
		phone->display();
	}

private:
	Phone* phone;
};




#endif /* DECORATORPHONE_H_ */
