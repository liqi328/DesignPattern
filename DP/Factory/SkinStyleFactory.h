/*
 * SkinStyleFactory.h
 *
 *  Created on: 2013-3-24
 *      Author: Administrator
 */

#ifndef SKINSTYLEFACTORY_H_
#define SKINSTYLEFACTORY_H_

#include "SkinStyle.h"

class SkinStyleFactory{
public:
	SkinStyleFactory(){}
	virtual~ SkinStyleFactory(){}

	virtual SkinStyle* createSkinStyle() = 0;
};

class BlueSkinStyleFactoryImpl:public SkinStyleFactory
{
public:
	BlueSkinStyleFactoryImpl(){}
	virtual~ BlueSkinStyleFactoryImpl(){}

	virtual SkinStyle* createSkinStyle()
	{
		SkinStyle* style = new BlueSkinStyle();
		return style;
	}
};

class RedSkinStyleFactoryImpl:public SkinStyleFactory
{
public:
	RedSkinStyleFactoryImpl(){}
	virtual~ RedSkinStyleFactoryImpl(){}

	virtual SkinStyle* createSkinStyle(){
		return new RedSkinStyle();
	}
};



#endif /* SKINSTYLEFACTORY_H_ */
