/*
 * TxtDataConverter.h
 *
 *  Created on: 2013-4-2
 *      Author: Administrator
 */

#ifndef TXTDATACONVERTER_H_
#define TXTDATACONVERTER_H_

#include "DataConverter.h"

class TxtDataConverter:public DataConverter
{
public:
	TxtDataConverter(DataSource* source);
	~TxtDataConverter();

	void convert();
};

TxtDataConverter::TxtDataConverter(DataSource* source):DataConverter(source)
{}

TxtDataConverter::~TxtDataConverter()
{}

void TxtDataConverter::convert()
{
	std::string data = dataSource->getData();

	/* convert */

	std::cout << "Convert data to TXT success." << std::endl;
}


#endif /* TXTDATACONVERTER_H_ */
