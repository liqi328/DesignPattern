/*
 * SkinStyle.h
 *
 *  Created on: 2013-3-24
 *      Author: Administrator
 */

#ifndef SKINSTYLE_H_
#define SKINSTYLE_H_

#include <iostream>

class SkinStyle{
public:
	SkinStyle(){}
	virtual~ SkinStyle(){};

	virtual void showStyle() = 0;

};

class BlueSkinStyle:public SkinStyle
{
public:
	BlueSkinStyle(){}

	virtual void showStyle()
	{
		std::cout << "Blue Style." <<std::endl;
	}
};

class RedSkinStyle:public SkinStyle
{
public:
	RedSkinStyle(){}

	virtual void showStyle()
	{
		std::cout << "Red Style." << std::endl;
	}
};

class GraySkinStyle:public SkinStyle
{
public:
	GraySkinStyle(){}

	virtual void showStyle()
	{
		std::cout << "Gray Style." << std::endl;
	}
};



#endif /* SKINSTYLE_H_ */
