/*
 * TestPrototype.cpp
 *
 *  Created on: 2013-3-25
 *      Author: Administrator
 */

#include "test.h"

#include "../Prototype/Resume.h"
#include "../Prototype/WorkExperience.h"

#include <iostream>

void testPrototype()
{
	std::cout << "-------------------test Prototype[start]-----------------------" << std::endl;

	Resume *liqiResume = new Resume("Liqi");

	liqiResume->setSex("Male");
	liqiResume->setWorkExperience("2011 - 10 -02", "Central South University");

	liqiResume->display();

	Resume* wr = (Resume*)liqiResume->clone();
	wr->display();
	wr->setName("HR");
	wr->setSex("Female");
	wr->display();
	wr->setWorkExperience("2007 - 10 - 01", "Beijin");
	wr->display();

	delete liqiResume;

	std::cout << "-------------------test Prototype[end]-------------------------" << std::endl;
}


