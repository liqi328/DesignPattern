/*
 * XMLDataConverter.h
 *
 *  Created on: 2013-4-2
 *      Author: Administrator
 */

#ifndef XMLDATACONVERTER_H_
#define XMLDATACONVERTER_H_

#include "DataConverter.h"

class XMLDataConverter:public DataConverter
{
public:
	XMLDataConverter(DataSource* source);
	~XMLDataConverter();

	void convert();
};

XMLDataConverter::XMLDataConverter(DataSource* source):DataConverter(source){}

XMLDataConverter::~XMLDataConverter(){}

void XMLDataConverter::convert()
{
	std::string data = dataSource->getData();

	/* convert */

	std::cout << "Convert data to XML success" << std::endl;
}


#endif /* XMLDATACONVERTER_H_ */
