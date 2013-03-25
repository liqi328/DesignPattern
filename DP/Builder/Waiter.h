/*
 * Waiter.h
 *
 *  Created on: 2013-3-25
 *      Author: Administrator
 */

#ifndef WAITER_H_
#define WAITER_H_

#include "Pizza.h"
#include "PizzaAbstractBuilder.h"

class Waiter
{
public:
	void setPizzaBuilder(PizzaBuilder* pb)
	{
		builder = pb;
	}

	Pizza* getPizza()
	{
		return builder->getPizza();
	}

	void constructPizza()
	{
		builder->createNewPizza();
		builder->buildDough();
		builder->buildSauce();
		builder->buildTopping();
	}

private:
	PizzaBuilder* builder;
};

#endif /* WAITER_H_ */
