/*
 * LogToDB.cpp
 *
 *  Created on: 2013-3-28
 *      Author: Administrator
 */

#include "LogToDB.h"

#include <iostream>

std::vector<Logger> LogToDB::RetrieveAllLog()
{
	std::cout << "Retrieve all logs from database." << std::endl;
	std::vector<Logger> v;
	return v;
}


void LogToDB::createLog(Logger& log)
{
	std::cout << "Add one log into database." << std::endl;
}

void LogToDB::updateLog(Logger& log)
{
	std::cout << "Update one log from database." << std::endl;
}

void LogToDB::deleteLog(Logger& log)
{
	std::cout << "Delete one log from database." << std::endl;
}

