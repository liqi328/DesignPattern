/*
 * TestAdapter.cpp
 *
 *  Created on: 2013-3-28
 *      Author: Administrator
 */


#include "test.h"

#include "../Adapter/Logger.h"
#include "../Adapter/LogToDB.h"
#include "../Adapter/LogToFile.h"
#include "../Adapter/LogAdapter.h"

#include <iostream>

void testAdapter()
{
	std::cout << "----------------test Adapter[start]-----------------" << std::endl;

	Logger log;
	log.setUserName("liqi");
	log.setLogContent("test Adapter");
	log.setOperateTime("2013-03-28");

	LogToDB dblog;
	dblog.createLog(log);
	dblog.updateLog(log);
	dblog.deleteLog(log);
	dblog.RetrieveAllLog();

	LogToFile *fileLog = new LogToFile("filename");

	LogAdapter adapter(fileLog);
	adapter.createLog(log);
	adapter.updateLog(log);
	adapter.deleteLog(log);
	adapter.RetrieveAllLog();


	std::cout << "----------------test Adapter[end]-------------------" << std::endl;
}

