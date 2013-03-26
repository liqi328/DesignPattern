/*
 * FileEncryptor.h
 *
 *  Created on: 2013-3-26
 *      Author: Administrator
 */

#ifndef FILEENCRYPTOR_H_
#define FILEENCRYPTOR_H_

#include <string>
#include <iostream>

class FileEncryptor
{
public:
	FileEncryptor();
	~FileEncryptor();

	std::string encrypt(const std::string& content);
};


#endif /* FILEENCRYPTOR_H_ */
