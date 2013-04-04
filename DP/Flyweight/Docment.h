/*
 * Docment.h
 *
 *  Created on: 2013-4-3
 *      Author: Administrator
 */

#ifndef DOCMENT_H_
#define DOCMENT_H_

#include "DocContent.h"

class Docment
{
public:
	Docment(){};
	~Docment(){};

	void addContent(DocContent * content);
	void removeContent(DocContent * content);

	void display();

};


#endif /* DOCMENT_H_ */
