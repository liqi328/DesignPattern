/*
 * FileReader.cpp
 *
 *  Created on: 2013-3-26
 *      Author: Administrator
 */


#include "FileReader.h"

#include <fstream>

FileReader::FileReader(){}

FileReader::~FileReader(){}

std::string FileReader::read(const std::string& srcFileName)
{
	std::string content;
	std::string line;

	std::ifstream fin(srcFileName.c_str(), std::ios::in);

	while(fin >> line)
	{
		content.append(line).append("\n");
	}

	std::cout << "Reading File finished." << std::endl;
	fin.close();

	return content;
}

