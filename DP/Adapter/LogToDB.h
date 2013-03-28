/*
 * LogToDB.h
 *
 *  Created on: 2013-3-28
 *      Author: Administrator
 */

#ifndef LOGTODB_H_
#define LOGTODB_H_

#include "Logger.h"

#include <vector>

class LogToDB
{
public:
	virtual~ LogToDB(){};
	void createLog(Logger& log);
	void updateLog(Logger& log);
	void deleteLog(Logger& log);
	std::vector<Logger> RetrieveAllLog();
};



#endif /* LOGTODB_H_ */
