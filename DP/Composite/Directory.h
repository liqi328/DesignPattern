/*
 * Directory.h
 *
 *  Created on: 2013-4-3
 *      Author: Administrator
 */

#ifndef DIRECTORY_H_
#define DIRECTORY_H_

#include <string>

class Directory
{
public:
	Directory(std::string n);
	virtual~ Directory();

	virtual void add(Directory * dir);
	virtual void remove(Directory * dir);
	virtual Directory * getChild(int i);

	virtual void show() = 0;

protected:
	std::string name;
};

Directory::Directory(std::string n):name(n){}

Directory::~Directory(){}

void Directory::add(Directory * dir)
{
	std::cout << " The operation [add] is not support by this object." << std::endl;
}

void Directory::remove(Directory * dir)
{
	std::cout << " The operation [remove] is not support by this object." << std::endl;
}

Directory * Directory::getChild(int i)
{
	std::cout << " The operation [getChild] is not support by this object." << std::endl;
}


#endif /* DIRECTORY_H_ */
