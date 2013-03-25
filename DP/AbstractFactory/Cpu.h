/*
 * CPU.h
 *
 *  Created on: 2013-3-24
 *      Author: Administrator
 */

#ifndef CPU_H_
#define CPU_H_

#include <iostream>

class Cpu
{
public:
	virtual void showCpuInformation() = 0;
	virtual~ Cpu(){}
};

class AMDCpu:public Cpu
{
public:
	virtual~ AMDCpu(){}

	virtual void showCpuInformation()
	{
		std::cout << "This cpu was made in AMD company, in 1998." << std::endl;
	}
};

class IntelCpu:public Cpu
{
public:
	virtual~ IntelCpu(){}

	virtual void showCpuInformation()
	{
		std::cout << "This cpu was made in Intel company, in 2001" << std::endl;
	}
};


#endif /* CPU_H_ */
