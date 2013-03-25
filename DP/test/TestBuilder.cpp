/*
 * TestBuilder.cpp
 *
 *  Created on: 2013-3-25
 *      Author: Administrator
 */


#include "test.h"
#include "../Builder/Pizza.h"
#include "../Builder/Waiter.h"
#include "../Builder/PizzaAbstractBuilder.h"

#include <iostream>

void testBuilder()
{
	std::cout << "---------------------testBuilder.[start]" << std::endl;
	Waiter* waiter = new Waiter();
	PizzaBuilder* pb = new ChinesePizzaBuilder();

	std::cout << "-------Chinest Pizza---------" << std::endl;
	waiter->setPizzaBuilder(pb);
	waiter->constructPizza();

	delete pb;
	std::cout << "------America Pizza----------" << std::endl;
	pb = new AmericaPizzaBuilder();
	waiter->setPizzaBuilder(pb);
	waiter->constructPizza();

	Pizza * p = waiter->getPizza();

	std::cout << "---------------------testBuilder.[end]" << std::endl;
}

