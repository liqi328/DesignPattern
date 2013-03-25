/*
 * PizzaAbstractBuilder.h
 *
 *  Created on: 2013-3-25
 *      Author: Administrator
 */

#ifndef PIZZAABSTRACTBUILDER_H_
#define PIZZAABSTRACTBUILDER_H_

#include "Pizza.h"

#include <iostream>

class PizzaBuilder
{
public:
	virtual~ PizzaBuilder(){}

	Pizza* getPizza()
	{
		return pizza;
	}

	void createNewPizza()
	{
		pizza = new Pizza();
	}

	virtual void buildDough() = 0;
	virtual void buildSauce() = 0;
	virtual void buildTopping() = 0;

protected:
	Pizza* pizza;
};

class ChinesePizzaBuilder:public PizzaBuilder
{
public:
	virtual~ ChinesePizzaBuilder(){}

	virtual void buildDough()
	{
		std::cout << "Chinese Dough." << std::endl;
		pizza->setDough("Chinese Dough");
	}

	virtual void buildSauce()
	{
		std::cout << "Chinese Sauce." << std::endl;
		pizza->setSauce("Chinese Sauce");
	}

	virtual void buildTopping()
	{
		std::cout << "Chinese Topping." << std::endl;
		std::cout << "Chinese Topping" << std::endl;
	}
};

class AmericaPizzaBuilder:public PizzaBuilder
{
public:
	virtual~ AmericaPizzaBuilder(){}

	virtual void buildDough()
	{
		std::cout << "America Dough." << std::endl;
		pizza->setDough("America Dough");
	}

	virtual void buildSauce()
	{
		std::cout << "America Sauce." << std::endl;
		pizza->setSauce("America Sauce.");
	}

	virtual void buildTopping()
	{
		std::cout << "America Topping." << std::endl;
		pizza->setTopping("America Topping.");
	}
};



#endif /* PIZZAABSTRACTBUILDER_H_ */
