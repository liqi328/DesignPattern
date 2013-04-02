/*
 * SQLServerDataSource.h
 *
 *  Created on: 2013-4-2
 *      Author: Administrator
 */

#ifndef SQLSERVERDATASOURCE_H_
#define SQLSERVERDATASOURCE_H_

#include "DataSource.h"


class SQLServerDataSource:public DataSource
{
public:
	SQLServerDataSource();
	~SQLServerDataSource();

	std::string getData();
};

SQLServerDataSource::SQLServerDataSource()
{}

SQLServerDataSource::~SQLServerDataSource()
{}

std::string SQLServerDataSource::getData()
{
	std::cout<< "Get data from SQL Server." << std::endl;
	return "data from sql server";
}

#endif /* SQLSERVERDATASOURCE_H_ */
