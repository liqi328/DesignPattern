/*
 * Resume.h
 *
 *  Created on: 2013-3-25
 *      Author: Administrator
 */

#ifndef RESUME_H_
#define RESUME_H_

#include "ICloneable.h"
#include "WorkExperience.h"

class Resume:public ICloneable
{
public:
	Resume(std::string _name);
	~ Resume();

	void setName(std::string n);
	void setSex(std::string s);
	void setWorkExperience(std::string wd, std::string com);

	std::string getName()const;
	std::string getSex()const;
	WorkExperience* getWorkExperience()const;

	ICloneable* clone()const;

	void display();

	Resume& operator=(const Resume&);

private:
	Resume(const Resume&);

private:
	std::string name;
	std::string sex;
	WorkExperience* work;
};


#endif /* RESUME_H_ */
