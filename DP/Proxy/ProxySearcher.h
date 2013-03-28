/*
 * ProxySearcher.h
 *
 *  Created on: 2013-3-28
 *      Author: Administrator
 */

#ifndef PROXYSEARCHER_H_
#define PROXYSEARCHER_H_

#include "Searcher.h"
#include "Validator.h"
#include "RealSearcher.h"
#include "Logger2.h"

/*
 * 保护代理
 * */

class ProxySearcher:public Searcher
{
public:
	ProxySearcher();
	~ProxySearcher();
	std::string doSearch(std::string& userid, std::string& keyword);

private:
	Logger2* logger;
	RealSearcher* searcher;
	Validator* validator;

};

ProxySearcher::ProxySearcher()
{
	logger = new Logger2();
	validator = new Validator();
	searcher = new RealSearcher();
}

ProxySearcher::~ProxySearcher()
{
	if(NULL == logger)
	{
		delete logger;
		logger = NULL;
	}
	if(NULL == validator)
	{
		delete validator;
		validator = NULL;
	}
	if(NULL == searcher)
	{
		delete searcher;
		searcher = NULL;
	}
}

std::string ProxySearcher::doSearch(std::string& userid, std::string& keyword)
{
	std::string result = "";
	if(validator->validate(userid))
	{
		result = searcher->doSearch(userid, keyword);
		logger->write(userid.append(" using keyword[").append(keyword).append("] do search at 2013-03-28."));

	}

	return result;
}


#endif /* PROXYSEARCHER_H_ */
