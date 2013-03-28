/*
 * Logger.cpp
 *
 *  Created on: 2013-3-28
 *      Author: Administrator
 */

#include "Logger.h"

#include <iostream>


Logger::Logger()
{
	/* 自动生成ID*/
	this->Id = "1";
}

void Logger::setLogContent(std::string content)
{
	this->content = content;
}

void Logger::setOperateTime(std::string time)
{
	this->operateTime = time;
}

void Logger::setUserName(std::string name)
{
	this->userName = name;
}

std::string Logger::getLogContent()const
{
	return this->content;
}


std::string Logger::getOperateTime()const
{
	return this->operateTime;
}

std::string Logger::getUserName()const
{
	return this->userName;
}

