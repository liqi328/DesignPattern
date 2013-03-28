/*
 * LogAdapter.h
 *
 *  Created on: 2013-3-28
 *      Author: Administrator
 */

#ifndef LOGADAPTER_H_
#define LOGADAPTER_H_

#include "LogToDB.h"
#include "LogToFile.h"

class LogAdapter:public LogToDB
{
public:
	LogAdapter(LogToFile* log);

	void createLog(Logger& log);
	void updateLog(Logger& log);
	void deleteLog(Logger& log);
	std::vector<Logger> RetrieveAllLog();
private:
	LogToFile* logAdaptee;
};

LogAdapter::LogAdapter(LogToFile* log)
{
	this->logAdaptee = log;
}

void LogAdapter::createLog(Logger& log)
{
	std::cout << "Add log to file using LogAdapter." << std::endl;
	logAdaptee->readLog();
}

void LogAdapter::updateLog(Logger& log)
{
	std::cout << "Update log into file using LogAdapter." <<std::endl;
	std::vector<Logger> v = logAdaptee->readLog();
	v.push_back(log);
	logAdaptee->writeLog(v);
}

void LogAdapter::deleteLog(Logger& log)
{
	std::cout << "Delete log from file using LogAdapter." << std::endl;
	logAdaptee->readLog();
}

std::vector<Logger> LogAdapter::RetrieveAllLog()
{
	std::cout << "Retrieve all log from file using LoggerAdapter" << std::endl;
	std::vector<Logger> v = logAdaptee->readLog();
	return v;
}




#endif /* LOGADAPTER_H_ */
