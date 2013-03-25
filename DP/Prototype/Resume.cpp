/*
 * Resume.cpp
 *
 *  Created on: 2013-3-25
 *      Author: Administrator
 */

#include "Resume.h"

Resume::Resume(std::string _name)
{
	this->name = _name;
	work = new WorkExperience();
}

Resume::~Resume()
{
	delete this->work;
}

Resume::Resume(const Resume& rhs)
{
	this->name = rhs.name;
	this->sex = rhs.sex;
	this->work = (WorkExperience*)rhs.work->clone();
}

ICloneable* Resume::clone()const
{
	return new Resume(*this);
}

void Resume::display()
{
	std::cout << "--------------------------------------------" << std::endl;
	std::cout << "Name: " << this->name << std::endl;
	std::cout << "Sex : " << this->sex  << std::endl;
	std::cout << "Work: " << *(this->work) << std::endl;
	std::cout << "--------------------------------------------" << std::endl;
}

Resume& Resume::operator =(const Resume& rhs)
{
	if(this != &rhs)
	{
		this->name = rhs.name;
		this->sex = rhs.sex;
		this->work = (WorkExperience*)rhs.work->clone();
	}
	return *this;
}

void Resume::setName(std::string n)
{
	this->name = n;
}

void Resume::setSex(std::string s)
{
	this->sex = s;
}

void Resume::setWorkExperience(std::string wd, std::string com)
{
	work->setWorkDate(wd);
	work->setCompany(com);
}

std::string Resume::getName()const
{
	return this->name;
}

std::string Resume::getSex()const
{
	return this->sex;
}

WorkExperience* Resume::getWorkExperience()const
{
	return this->work;
}


