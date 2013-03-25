/*
 * TestAbstractFactory.cpp
 *
 *  Created on: 2013-3-24
 *      Author: Administrator
 */

#include "test.h"

#include "../AbstractFactory/Cpu.h"
#include "../AbstractFactory/MotherBoard.h"
#include "../AbstractFactory/AbstractFactory.h"

#include <iostream>

void testAbstractFactory(){
	std::cout << "-----------------------------test AbstractFactory[start]-------------------" << std::endl;
	AbstractFactory* amdFactory = new AMDFactory();
	AbstractFactory* intelFactory = new IntelFactory();

	amdFactory->createCpu()->showCpuInformation();
	amdFactory->createMotherBoard()->showBoardInformation();
	intelFactory->createCpu()->showCpuInformation();
	intelFactory->createMotherBoard()->showBoardInformation();

	std::cout << "-----------------------------test AbstractFactory[end]-------------------" << std::endl;
}

