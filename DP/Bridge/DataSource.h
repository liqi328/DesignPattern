/*
 * DataSource.h
 *
 *  Created on: 2013-4-2
 *      Author: Administrator
 */

#ifndef DATASOURCE_H_
#define DATASOURCE_H_

#include <string>

class DataSource
{
public:
	DataSource(){}
	virtual~ DataSource(){}

	virtual std::string getData() = 0;

};


#endif /* DATASOURCE_H_ */
