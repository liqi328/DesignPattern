/*
 * AnimationDocContent.h
 *
 *  Created on: 2013-4-3
 *      Author: Administrator
 */

#ifndef ANIMATIONDOCCONTENT_H_
#define ANIMATIONDOCCONTENT_H_

#include "DocContent.h"

class AnimationDocContent:public DocContent
{
public:
	AnimationDocContent(std::string& url);
	~AnimationDocContent(){}

	void display(Coordinates& cord, Dimensions& dim);
};

AnimationDocContent::AnimationDocContent(std::string& url):DocContent(url){}

void AnimationDocContent::display(Coordinates& cord, Dimensions& dim)
{
	std::cout << "Animation: " << this->getUrl() << std::endl;
	std::cout << "---- coordinates:[" << cord.getXaxis() << ", " << cord.getYaxis() << "]. " << std::endl;
	std::cout << "---- dimensions :[" << dim.getWidth()  << ", " << dim.getHeight() << "]. " << std::endl;
}


#endif /* ANIMATIONDOCCONTENT_H_ */
