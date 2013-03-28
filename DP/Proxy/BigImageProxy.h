/*
 * BigImageProxy.h
 *
 *  Created on: 2013-3-28
 *      Author: Administrator
 */

#ifndef BIGIMAGEPROXY_H_
#define BIGIMAGEPROXY_H_

#include "Image.h"
#include "BigImage.h"

#include <iostream>

/*
 * Ðé´úÀí
 * */


class BigImageProxy:public Image
{
public:
	BigImageProxy(std::string iname):Image(iname), image(0){}
	~BigImageProxy();

	void display();

private:
	BigImage *image;
};

BigImageProxy::~BigImageProxy()
{
	if(NULL != image)
	{
		delete image;
		image = NULL;
	}
}

void BigImageProxy::display()
{
	std::cout << "";
	if(NULL == image){
		image = new BigImage(getName());
	}
	image->display();
}


#endif /* BIGIMAGEPROXY_H_ */
