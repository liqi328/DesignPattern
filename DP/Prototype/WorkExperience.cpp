/*
 * WorkExperience.cpp
 *
 *  Created on: 2013-3-25
 *      Author: Administrator
 */

#include "WorkExperience.h"

WorkExperience::WorkExperience()
{

}

WorkExperience::~WorkExperience(){}

WorkExperience::WorkExperience(const WorkExperience& rhs)
{
	this->company = rhs.company;
	this->workdate = rhs.workdate;
}

ICloneable* WorkExperience::clone()const
{
	return new WorkExperience(*this);
}

WorkExperience& WorkExperience::operator =(const WorkExperience& rhs)
{
	if(this != &rhs)
	{
		this->workdate = rhs.workdate;
		this->company = rhs.company;
	}

	return *this;
}

std::ostream& operator<<(std::ostream& out, const WorkExperience& work)
{
	out << work.getWorkDate() << " \t" << work.getCompany();
	return out;
}

void WorkExperience::setWorkDate(std::string wd)
{
	this->workdate = wd;
}

void WorkExperience::setCompany(std::string com)
{
	this->company = com;
}

std::string WorkExperience::getWorkDate()const
{
	return this->workdate;
}

std::string WorkExperience::getCompany()const
{
	return this->company;
}


