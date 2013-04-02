/*
 * OracleDataSource.h
 *
 *  Created on: 2013-4-2
 *      Author: Administrator
 */

#ifndef ORACLEDATASOURCE_H_
#define ORACLEDATASOURCE_H_

#include "DataSource.h"

class OracleDataSource:public DataSource
{
public:
	OracleDataSource();
	~OracleDataSource();

	std::string getData();
};

OracleDataSource::OracleDataSource(){}

OracleDataSource::~OracleDataSource(){}

std::string OracleDataSource::getData()
{
	std::cout << "Get Data from Oracle." << std::endl;

	return "data from oracle.";
}


#endif /* ORACLEDATASOURCE_H_ */
