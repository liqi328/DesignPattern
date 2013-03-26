/*
 * TestFacade.cpp
 *
 *  Created on: 2013-3-26
 *      Author: Administrator
 */


#include "test.h"

#include "../Facade/EncryptionFacade.h"

#include <iostream>

void testFacade()
{
	std::cout << "-------------------test Facade[start]---------------------" << std::endl;

	EncryptionFacade ef;
	ef.encrypt("D:/in.txt", "D:/out.txt");

	std::cout << "-------------------test Facade[end]-----------------------" << std::endl;
}

