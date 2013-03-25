/*
 * Singleton_C.h
 *
 *  Created on: 2013-3-25
 *      Author: Administrator
 */

#ifndef SINGLETON_C_H_
#define SINGLETON_C_H_

#include <iostream>

/* 单例设计模式，一个静态指针，和一个静态函数，私有化构造函数、析构函数、构造函数复制、重载赋值语句。
 *
 * */
class Singleton_C
{
public:
	static Singleton_C* getInstance()
	{
		if(NULL == instance)
		{
			instance = new Singleton_C();
		}
		return instance;
	}

private:
	Singleton_C()
	{
		std::cout << "New Singleton_C." << std::endl;
	}
	~Singleton_C()
	{
		std::cout<< "Delete Singleton_C." <<std::endl;
	}

	Singleton_C(const Singleton_C&);
	Singleton_C& operator=(const Singleton_C&);

	class SingletonGarbo
	{
	public:
		~SingletonGarbo()
		{
			if(NULL != Singleton_C::instance)
			{
				delete Singleton_C::instance;
				Singleton_C::instance = NULL;
			}
		}
	};


private:
	static Singleton_C* instance;
	static SingletonGarbo gb;


};

Singleton_C* Singleton_C::instance = NULL;
Singleton_C::SingletonGarbo Singleton_C::gb;



#endif /* SINGLETON_C_H_ */
