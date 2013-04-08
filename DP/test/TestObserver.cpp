/*
 * TestObserver.cpp
 *
 *  Created on: 2013-4-8
 *      Author: Administrator
 */


#include "test.h"

#include "../Observer/ControlCenter.h"
#include "../Observer/ConcreteControlCenter.h"
#include "../Observer/Observer.h"
#include "../Observer/Player.h"


#include <iostream>

void testObserver()
{
	std::cout << "----------------------test Observer[start]-----------------" << std::endl;

	ControlCenter * cc = new ConcreteControlCenter("ÎÞÍù²»Ê¤");

	Observer * liqi = new Player("Liqi");
	Observer * wang = new Player("Wang");
	Observer * zhang = new Player("Zhang");
	Observer * liu = new Player("Liu");

	cc->join(liqi);
	cc->join(wang);
	cc->join(zhang);
	cc->join(liu);

	liqi->beAttacked(cc);

	delete liqi;
	delete wang;
	delete zhang;
	delete liu;
	delete cc;

	std::cout << "----------------------test Observer[end  ]-----------------" << std::endl;
}

