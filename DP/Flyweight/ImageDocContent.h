/*
 * ImageDocContent.h
 *
 *  Created on: 2013-4-3
 *      Author: Administrator
 */

#ifndef IMAGEDOCCONTENT_H_
#define IMAGEDOCCONTENT_H_

#include "DocContent.h"

class ImageDocContent:public DocContent
{
public:
	ImageDocContent(std::string& url);
	~ImageDocContent(){}

	void display(Coordinates& cord, Dimensions& dim);
};

ImageDocContent::ImageDocContent(std::string& url):DocContent(url){}

void ImageDocContent::display(Coordinates& cord, Dimensions& dim)
{
	std::cout << "Image: " << this->getUrl() << std::endl;
	std::cout << "---- coordinates:[" << cord.getXaxis() << ", " << cord.getYaxis() << "]. " << std::endl;
	std::cout << "---- dimensions :[" << dim.getWidth()  << ", " << dim.getHeight() << "]. " << std::endl;
}


#endif /* IMAGEDOCCONTENT_H_ */
