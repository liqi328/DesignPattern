/*
 * Image.h
 *
 *  Created on: 2013-3-28
 *      Author: Administrator
 */

#ifndef IMAGE_H_
#define IMAGE_H_

#include <string>

class Image
{
public:
	Image(std::string iname):name(iname){}
	virtual ~Image(){}

	std::string getName(){ return name; }

	virtual void display() = 0;

private:
	std::string name;
};


#endif /* IMAGE_H_ */
