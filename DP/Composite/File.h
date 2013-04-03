/*
 * File.h
 *
 *  Created on: 2013-4-3
 *      Author: Administrator
 */

#ifndef FILE_H_
#define FILE_H_

#include "Directory.h"

class File:public Directory
{
public:
	File(std::string n);
	~File();

	void show();
};

File::File(std::string n):Directory(n){}

File::~File(){}

void File::show()
{
	std::cout << name << std::endl;
}


#endif /* FILE_H_ */
