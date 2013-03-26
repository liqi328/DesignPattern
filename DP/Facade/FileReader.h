/*
 * FileReader.h
 *
 *  Created on: 2013-3-26
 *      Author: Administrator
 */

#ifndef FILEREADER_H_
#define FILEREADER_H_

#include <iostream>

class FileReader
{
public:
	FileReader();
	~FileReader();

	std::string read(const std::string& srcFileName);
};


#endif /* FILEREADER_H_ */
