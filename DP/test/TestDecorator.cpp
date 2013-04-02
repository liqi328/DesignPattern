/*
 * TestDecorator.cpp
 *
 *  Created on: 2013-4-2
 *      Author: Administrator
 */


#include "test.h"
#include "../Decorator/Phone.h"
#include "../Decorator/IPhone.h"
#include "../Decorator/NokiaPhone.h"
#include "../Decorator/DecoratorPhone.h"
#include "../Decorator/BoxDecoratorPhone.h"
#include "../Decorator/MembraneDecoratorPhone.h"

#include <iostream>

void testDecorator()
{
	std::cout << "--------------------test Decorator[start]-----------------" << std::endl;

	Phone* iphone = new IPhone("IPhone 4S");
	Phone* nokia  = new NokiaPhone("Nokia 3200");

	DecoratorPhone* decorator1 = new BoxDecoratorPhone(iphone);
	decorator1->display();

	DecoratorPhone* decorator2 = new MembraneDecoratorPhone(decorator1);
	decorator2->display();

	Phone* nd1 = new MembraneDecoratorPhone(nokia);
	Phone* nd2 = new BoxDecoratorPhone(nd1);
	nd2->display();


	delete decorator1;
	delete decorator2;
	delete nd1;
	delete nd2;
	delete iphone;
	delete nokia;

	std::cout << "--------------------test Decorator[end]-------------------" << std::endl;
}

