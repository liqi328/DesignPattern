/*
 * RealSearcher.h
 *
 *  Created on: 2013-3-28
 *      Author: Administrator
 */

#ifndef REALSEARCHER_H_
#define REALSEARCHER_H_

#include "Searcher.h"

class RealSearcher:public Searcher
{
public:
	std::string doSearch(std::string& userid, std::string& keyword);
};

std::string RealSearcher::doSearch(std::string& userid, std::string& keyword)
{
	std::cout << "User:" << userid << ", Searching keyword:"<< keyword << std::endl;
	return "result";
}


#endif /* REALSEARCHER_H_ */
