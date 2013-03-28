/*
 * TestProxy.cpp
 *
 *  Created on: 2013-3-28
 *      Author: Administrator
 */

#include "test.h"
#include "../Proxy/Image.h"
#include "../Proxy/BigImage.h"
#include "../Proxy/BigImageProxy.h"

#include <iostream>

void testProxy()
{
	std::cout << "------------------test Proxy[start]--------------" << std::endl;
	Image *image = new BigImageProxy("1.jpg");
	image->display();

	delete image;

	std::cout << "------------------test Proxy[end]----------------" << std::endl;
}


