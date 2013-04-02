/*
 * IPhone.h
 *
 *  Created on: 2013-4-2
 *      Author: Administrator
 */

#ifndef IPHONE_H_
#define IPHONE_H_

#include "Phone.h"
#include <string>

class IPhone:public Phone
{
public:
	IPhone(std::string n):name(n){}
	~IPhone(){}

	void display();

private:
	std::string name;
};

void IPhone::display()
{
	std::cout << name << "µÄ×°ÊÎ." << std::endl;
}


#endif /* IPHONE_H_ */
