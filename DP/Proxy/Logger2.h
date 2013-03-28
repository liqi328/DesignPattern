/*
 * Logger.h
 *
 *  Created on: 2013-3-28
 *      Author: Administrator
 */

#ifndef LOGGER_H_
#define LOGGER_H_

#include <iostream>
#include <string>

class Logger2
{
public:
	void write(std::string& content);
};

void Logger2::write(std::string& content)
{
	std::cout << content << std::endl;
}


#endif /* LOGGER_H_ */
