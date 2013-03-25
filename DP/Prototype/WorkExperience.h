/*
 * WorkExperience.h
 *
 *  Created on: 2013-3-25
 *      Author: Administrator
 */

#ifndef WORKEXPERIENCE_H_
#define WORKEXPERIENCE_H_

#include "ICloneable.h"

#include <iostream>

class WorkExperience:public ICloneable
{
public:
	WorkExperience();
	virtual~ WorkExperience();

	void setWorkDate(std::string wd);
	void setCompany(std::string com);

	std::string getWorkDate()const;
	std::string getCompany()const;

	ICloneable* clone()const;

	WorkExperience& operator=(const WorkExperience& rhs);

	friend std::ostream& operator<<(std::ostream& out, const WorkExperience& work);

private:
	WorkExperience(const WorkExperience&);

private:
	std::string workdate;
	std::string company;
};


#endif /* WORKEXPERIENCE_H_ */
