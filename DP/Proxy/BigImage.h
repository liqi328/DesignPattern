/*
 * BigImage.h
 *
 *  Created on: 2013-3-28
 *      Author: Administrator
 */

#ifndef BIGIMAGE_H_
#define BIGIMAGE_H_

#include "Image.h"

class BigImage:public Image
{
public:
	BigImage(std::string iname):Image(iname){}
	~BigImage(){}

	void display();
};

void BigImage::display()
{
	std::cout << "Display Big Image:" << getName() << std::endl;
}


#endif /* BIGIMAGE_H_ */
