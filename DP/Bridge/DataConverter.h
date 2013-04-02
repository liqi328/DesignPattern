/*
 * DataConverter.h
 *
 *  Created on: 2013-4-2
 *      Author: Administrator
 */

#ifndef DATACONVERTER_H_
#define DATACONVERTER_H_

#include "DataSource.h"

class DataConverter
{
public:
	DataConverter(DataSource* ds):dataSource(ds){}
	virtual~ DataConverter(){}

	void setDataSource(DataSource* source);

	virtual void convert() = 0;

protected:
	DataSource* dataSource;
};

void DataConverter::setDataSource(DataSource* source)
{
	dataSource = source;
}


#endif /* DATACONVERTER_H_ */
