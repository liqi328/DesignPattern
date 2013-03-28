/*
 * Validator.h
 *
 *  Created on: 2013-3-28
 *      Author: Administrator
 */

#ifndef VALIDATOR_H_
#define VALIDATOR_H_

#include <string>

class Validator
{
public:
	bool validate(std::string& userid);
};

bool Validator::validate(std::string& userid)
{
	std::cout << "find user information from database." << std::endl;
	bool pass = false;
	if("liqi" == userid)
	{
		std::cout << userid << " is an authorized customer." << std::endl;
		pass = true;
	}else
	{
		std::cout << userid << "is not an authorized customer." << std::endl;
	}
	return pass;
}


#endif /* VALIDATOR_H_ */
