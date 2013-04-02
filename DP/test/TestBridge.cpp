/*
 * TestBridge.cpp
 *
 *  Created on: 2013-4-2
 *      Author: Administrator
 */


#include "test.h"
#include "../Bridge/DataSource.h"
#include "../Bridge/SQLServerDataSource.h"
#include "../Bridge/OracleDataSource.h"

#include "../Bridge/DataConverter.h"
#include "../Bridge/TxtDataConverter.h"
#include "../Bridge/XMLDataConverter.h"

#include <iostream>

void testBridge()
{
	std::cout << "------------------test Proxy[start]--------------" << std::endl;

	DataSource* sqlSource = new SQLServerDataSource();
	DataSource* oracleSource = new OracleDataSource();

	DataConverter* txtConverter = new TxtDataConverter(sqlSource);
	DataConverter* xmlConverter = new XMLDataConverter(oracleSource);


	txtConverter->convert();
	txtConverter->setDataSource(oracleSource);
	txtConverter->convert();

	xmlConverter->convert();
	xmlConverter->setDataSource(sqlSource);
	xmlConverter->convert();

	delete sqlSource;
	delete oracleSource;
	delete txtConverter;
	delete xmlConverter;

	std::cout << "------------------test Proxy[end]--------------" << std::endl;
}

