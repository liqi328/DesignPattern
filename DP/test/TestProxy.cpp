/*
 * TestProxy.cpp
 *
 *  Created on: 2013-3-28
 *      Author: Administrator
 */

#include "test.h"
#include "../Proxy/Image.h"
#include "../Proxy/BigImageProxy.h"

#include "../Proxy/Searcher.h"
#include "../Proxy/ProxySearcher.h"

#include <iostream>

void testProxy()
{
	std::cout << "------------------test Proxy[start]--------------" << std::endl;
	Image *image = new BigImageProxy("1.jpg");
	image->display();

	delete image;

	Searcher* searcher = new ProxySearcher();
	std::string userid("liqi");
	std::string keyword("csu 2013");
	searcher->doSearch(userid, keyword);


	/* test Protected Proxy */


	std::cout << "------------------test Proxy[end]----------------" << std::endl;
}


