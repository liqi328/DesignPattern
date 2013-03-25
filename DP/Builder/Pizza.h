/*
 * Pizza.h
 *
 *  Created on: 2013-3-25
 *      Author: Administrator
 */

#ifndef PIZZA_H_
#define PIZZA_H_

class string;

class Pizza
{
public:
	void setDough(std::string d)
	{
		this->dough = d;
	}

	void setSauce(std::string s)
	{
		sauce = s;
	}

	void setTopping(std::string t)
	{
		topping = t;
	}

private:
	std::string dough;
	std::string sauce;
	std::string topping;
};


#endif /* PIZZA_H_ */
