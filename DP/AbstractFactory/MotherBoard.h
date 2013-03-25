/*
 * MotherBoard.h
 *
 *  Created on: 2013-3-24
 *      Author: Administrator
 */

#ifndef MOTHERBOARD_H_
#define MOTHERBOARD_H_

#include <iostream>

/* Ö÷°å */
class MotherBoard
{
public:
	virtual~ MotherBoard(){}

	virtual void showBoardInformation() = 0;
};

class AMDMotherBoard:public MotherBoard
{
public:
	virtual~ AMDMotherBoard(){}

	virtual void showBoardInformation()
	{
		std::cout << "This board was made in AMD company." << std::endl;
	}
};

class IntelMotherBoard:public MotherBoard
{
public:
	virtual~ IntelMotherBoard(){}

	virtual void showBoardInformation()
	{
		std::cout << "This board was made in Intel company." << std::endl;
	}
};


#endif /* MOTHERBOARD_H_ */
