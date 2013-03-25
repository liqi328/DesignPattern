/*
 * AbstractFactory.h
 *
 *  Created on: 2013-3-24
 *      Author: Administrator
 */

#ifndef ABSTRACTFACTORY_H_
#define ABSTRACTFACTORY_H_

#include "Cpu.h"
#include "MotherBoard.h"


class AbstractFactory
{
public:
	virtual~ AbstractFactory(){}

	virtual Cpu* createCpu() = 0;
	virtual MotherBoard* createMotherBoard() = 0;
};

class AMDFactory:public AbstractFactory
{
public:
	virtual~ AMDFactory(){}

	virtual Cpu* createCpu()
	{
		return new AMDCpu();
	}

	virtual MotherBoard* createMotherBoard()
	{
		return new AMDMotherBoard();
	}
};

class IntelFactory:public AbstractFactory
{
public:
	virtual~ IntelFactory(){}

	virtual Cpu* createCpu()
	{
		return new IntelCpu();
	}

	virtual MotherBoard* createMotherBoard()
	{
		return new IntelMotherBoard();
	}
};


#endif /* ABSTRACTFACTORY_H_ */
