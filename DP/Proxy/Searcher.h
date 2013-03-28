/*
 * Searcher.h
 *
 *  Created on: 2013-3-28
 *      Author: Administrator
 */

#ifndef SEARCHER_H_
#define SEARCHER_H_

#include <string>

class Searcher
{
public:
	virtual~ Searcher(){}

	virtual std::string doSearch(std::string& userid, std::string& keywod) = 0;
};


#endif /* SEARCHER_H_ */
