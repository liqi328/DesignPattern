/*
 * Logger.h
 *
 *  Created on: 2013-3-28
 *      Author: Administrator
 */

#ifndef LOGGER_H_
#define LOGGER_H_

#include <string>

class Logger
{
public:
	Logger();

	void setUserName(std::string name);
	void setOperateTime(std::string time);
	void setLogContent(std::string content);

	std::string getUserName()const;
	std::string getOperateTime()const;
	std::string getLogContent()const;

private:
	std::string Id;
	std::string userName;
	std::string operateTime;

	std::string content;
};


#endif /* LOGGER_H_ */
