/*
 * FileWriter.h
 *
 *  Created on: 2013-3-26
 *      Author: Administrator
 */

#ifndef FILEWRITER_H_
#define FILEWRITER_H_

#include <iostream>

class FileWriter
{
public:
	FileWriter();
	~FileWriter();

	void write(const std::string& content, const std::string& desFileName);
};


#endif /* FILEWRITER_H_ */
