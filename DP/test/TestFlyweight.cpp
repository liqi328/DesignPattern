/*
 * TestFlyweight.cpp
 *
 *  Created on: 2013-4-3
 *      Author: Administrator
 */


#include "test.h"

#include "../Flyweight/DocContent.h"
#include "../Flyweight/Coordinates.h"
#include "../Flyweight/Dimensions.h"
#include "../Flyweight/DocContentFactory.h"

#include <iostream>

void testFlyweight()
{
	std::cout << "-----------------test Flyweight[start]------------- " << std::endl;

	DocContentFactory * factory = DocContentFactory::getInstance();
	std::string url("D:/image/beauty.png");
	std::string url2("E:/pic/books.jpg");
	std::string url3("D:/animation/play.avi");
	std::string url4("F:/film/Lost.wmv");

	DocContent * imageContent = factory->getDocContent(url);
	DocContent * content2 = factory->getDocContent(url2);
	DocContent * content3 = factory->getDocContent(url3);
	DocContent * content4 = factory->getDocContent(url4);

	Coordinates cord(12, 23);
	Dimensions  dim(29.4, 45.8);
	imageContent->display(cord, dim);



	imageContent->display(cord, dim);
	cord.setXaxis(34);
	cord.setYaxis(78);

	content2->display(cord, dim);

	content3->display(cord, dim);
	content4->display(cord, dim);

	factory->getDocContent(url);
	factory->getDocContent(url3);


	delete imageContent;
	delete content2;
	delete content3;
	delete content4;

	std::cout << "-----------------test Flyweight[end  ]------------- " << std::endl;
}

