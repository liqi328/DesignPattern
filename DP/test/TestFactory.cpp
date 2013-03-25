/*
 * TestFactory.cpp
 *
 *  Created on: 2013-3-24
 *      Author: Administrator
 */

#include "test.h"

#include "../Factory/SkinStyle.h"
#include "../Factory/SkinStyleFactory.h"

#include <iostream>

void testFactory(){
	std::cout << "-----------------------------testFactory.[start]-------------------------------" << std::endl;
	SkinStyleFactory * factory = new BlueSkinStyleFactoryImpl();
	SkinStyle* style = factory->createSkinStyle();
	std::cout << "my current skin style is: ";
	style->showStyle();

	std::cout << " Now, I like red color." << std::endl;
	delete factory;
	factory = new RedSkinStyleFactoryImpl();
	delete style;
	style = factory->createSkinStyle();
	style->showStyle();
	std::cout << "-----------------------------testFactory.[end]-------------------------------" << std::endl;
}


