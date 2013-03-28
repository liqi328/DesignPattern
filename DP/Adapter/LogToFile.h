/*
 * LogToFile.h
 *
 *  Created on: 2013-3-28
 *      Author: Administrator
 */

#ifndef LOGTOFILE_H_
#define LOGTOFILE_H_

#include "Logger.h"

#include <string>
#include <vector>

class LogToFile
{
public:
	LogToFile(std::string fileName);
	std::vector<Logger> readLog();
	void writeLog(const std::vector<Logger>& logVector);

private:
	std::string fileName;
};


#endif /* LOGTOFILE_H_ */
