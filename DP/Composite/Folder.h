/*
 * Folder.h
 *
 *  Created on: 2013-4-3
 *      Author: Administrator
 */

#ifndef FOLDER_H_
#define FOLDER_H_

#include "Directory.h"

#include <list>
#include <algorithm>

class Folder:public Directory
{
public:
	Folder(std::string n);
	~Folder();

	void add(Directory * dir);
	void remove(Directory * dir);
	Directory * getChild(int i);

	void show();

private:
	std::list<Directory *> dirList;

};

Folder::Folder(std::string n):Directory(n){}

Folder::~Folder(){}

void Folder::add(Directory * dir)
{
	dirList.push_back(dir);
}

void Folder::remove(Directory * dir)
{
	std::list<Directory * >::iterator itr;
	itr = find(dirList.begin(), dirList.end(), dir);
	if(itr != dirList.end()){
		itr = dirList.erase(itr);
	}else{
		std::cout << "not found." << std::endl;
	}


}

Directory * Folder::getChild(int i)
{
	if(i <= 0 || i > dirList.size())return NULL;

	std::list<Directory * >::const_iterator itr = dirList.begin();
	int j = 1;
	for(; itr != dirList.end(); ++itr,++j)
	{
		if(j == i)break;
	}
	return *itr;
}

void Folder::show()
{
	std::list<Directory * >::const_iterator itr = dirList.begin();
	std::cout << name << std::endl;
	for(; itr != dirList.end(); ++itr)
	{
		(*itr)->show();
	}
}




#endif /* FOLDER_H_ */
