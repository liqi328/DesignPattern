/*
 * main.cpp
 *
 *  Created on: 2013-3-24
 *      Author: Administrator
 */

#include "test/test.h"

#include <iostream>

int main(void){

	/*test factory - design pattern */
	testFactory();

	/*test abstract factory - design pattern */
	testAbstractFactory();

	/*test builder - design pattern */
	testBuilder();

	/* test Singleton - design pattern */
	testSingleton();

	/* test Prototype - design pattern */
	testPrototype();

	testFacade();

	testAdapter();

	testProxy();

	testDecorator();

	testBridge();

	testComposite();


	return 0;
}


