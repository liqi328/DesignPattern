/*
 * DocContentFactory.h
 *
 *  Created on: 2013-4-3
 *      Author: Administrator
 */

#ifndef DOCCONTENTFACTORY_H_
#define DOCCONTENTFACTORY_H_

#include "DocContent.h"
#include "ImageDocContent.h"
#include "AnimationDocContent.h"

#include <map>

class DocContentFactory
{
public:
	static DocContentFactory * getInstance();
	static void release();

	DocContent * getDocContent(std::string& url);

private:
	DocContentFactory();
	DocContentFactory(const DocContentFactory&);
	~DocContentFactory();

private:
	static DocContentFactory * factory;
	std::map<std::string, DocContent *> docPool;
};

DocContentFactory * DocContentFactory::factory = NULL;
//std::map<std::string, DocContent *> DocContentFactory::docPool;

DocContentFactory::DocContentFactory()
{
}

DocContentFactory::~DocContentFactory()
{}

DocContentFactory * DocContentFactory::getInstance()
{
	if(NULL == factory)
	{
		factory = new DocContentFactory();
	}
	return factory;
}

void DocContentFactory::release()
{
	if(NULL != factory)
	{
		delete factory;
		factory = NULL;
	}
}

DocContent * DocContentFactory::getDocContent(std::string& url)
{
	std::map<std::string, DocContent *>::const_iterator itr;
	itr = this->docPool.find(url);
	if(itr != docPool.end())
	{
		std::cout << "founded." << std::endl;
		return itr->second;
	}

	std::cout << "newed." << std::endl;

	/*
	 * 根据文件名称的后缀，使用不同的类
	 * */

	unsigned index = url.find_last_of(".");
	std::string suffix = url.substr(index + 1);
	std::cout << "suffix:" << suffix <<std::endl;

	DocContent * content;
	if(suffix == "png" || suffix == "gif" || suffix == "jpg")
	{
		content = new ImageDocContent(url);
	}else
	{
		content = new AnimationDocContent(url);
	}


	docPool[url] = content;
	return content;
}


#endif /* DOCCONTENTFACTORY_H_ */
