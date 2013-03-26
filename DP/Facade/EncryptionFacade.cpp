/*
 * EncryptionFacade.cpp
 *
 *  Created on: 2013-3-26
 *      Author: Administrator
 */

#include "EncryptionFacade.h"

EncryptionFacade::EncryptionFacade()
{
	reader = new FileReader();
	writer = new FileWriter();
	encryptor = new FileEncryptor();
}

EncryptionFacade::~EncryptionFacade()
{
	delete reader;
	delete writer;
	delete encryptor;
}

void EncryptionFacade::encrypt(const std::string& srcFileName, const std::string& desFileName)
{
	std::cout << "--------File Encryptor---------" << std::endl;
	writer->write(encryptor->encrypt(reader->read(srcFileName)), desFileName);
}


