/*
 * DocContent.h
 *
 *  Created on: 2013-4-3
 *      Author: Administrator
 */

#ifndef DOCCONTENT_H_
#define DOCCONTENT_H_

#include "Dimensions.h"
#include "Coordinates.h"

#include <string>

class DocContent
{
public:
	DocContent(std::string& url);
	virtual~ DocContent();

	virtual void display(Coordinates& cord, Dimensions& dim) = 0;

protected:
	std::string getUrl()const;

private:
	std::string url;
};

DocContent::DocContent(std::string& url):url(url){}

DocContent::~DocContent(){}

std::string DocContent::getUrl()const
{
	return this->url;
}




#endif /* DOCCONTENT_H_ */
