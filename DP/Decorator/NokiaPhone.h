/*
 * NokiaPhone.h
 *
 *  Created on: 2013-4-2
 *      Author: Administrator
 */

#ifndef NOKIAPHONE_H_
#define NOKIAPHONE_H_

#include "Phone.h"

#include <string>

class NokiaPhone:public Phone
{
public:
	NokiaPhone(std::string n):name(n){}
	~NokiaPhone(){}

	void display();

private:
	std::string name;
};

void NokiaPhone::display()
{
	std::cout << name << "µÄ×°ÊÎ." << std::endl;
}


#endif /* NOKIAPHONE_H_ */
