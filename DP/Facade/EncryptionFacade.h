/*
 * EncryptionFacade.h
 *
 *  Created on: 2013-3-26
 *      Author: Administrator
 */

#ifndef ENCRYPTIONFACADE_H_
#define ENCRYPTIONFACADE_H_

#include "FileReader.h"
#include "FileWriter.h"
#include "FileEncryptor.h"

class EncryptionFacade
{
public:
	EncryptionFacade();
	~EncryptionFacade();

	void encrypt(const std::string& srcFileName, const std::string& desFileName);

private:
	FileWriter* writer;
	FileReader* reader;
	FileEncryptor* encryptor;
};


#endif /* ENCRYPTIONFACADE_H_ */
