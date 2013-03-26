/*
 * FileWriter.cpp
 *
 *  Created on: 2013-3-26
 *      Author: Administrator
 */


#include "FileWriter.h"

#include <fstream>

FileWriter::FileWriter(){}

FileWriter::~FileWriter(){}

void FileWriter::write(const std::string& content, const std::string& desFileName)
{
	std::ofstream fout(desFileName.c_str(), std::ios::out);

	fout << content;
	std::cout << "Writing File finished." << std::endl;
	fout.close();
}

