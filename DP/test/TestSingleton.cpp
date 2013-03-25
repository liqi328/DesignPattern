/*
 * TestSingleton.cpp
 *
 *  Created on: 2013-3-25
 *      Author: Administrator
 */


#include "test.h"

#include "../Singleton/Singleton.h"
#include "../Singleton/Singleton_B.h"
#include "../Singleton/Singleton_C.h"

#include <iostream>

void testSingleton()
{
        Singleton *single1 = Singleton::GetInstance();
        Singleton *single2 = Singleton::GetInstance();
        std::cout << "value 1: " << single1->GetValue() << std::endl;
        single1->SetValue(100);
        std::cout << "value 2: " << single2->GetValue() << std::endl;
        if( single2 == single1 )
                std::cout << "single1 and single2 is the same object." << std::endl;


        /* test Singleton_B */
        Singleton_B* sin = Singleton_B::getInstance();
        Singleton_B* sin2 = Singleton_B::getInstance();
        if(sin == sin2)
        {
        	std::cout << "sin and sin2 is the same object." << std::endl;
        }
        sin->release();

        /* test Singleton_C */
        std::cout << "--------test Singleton_C[start]-------------------" << std::endl;
        Singleton_C* sc = Singleton_C::getInstance();
        Singleton_C* sc2 = Singleton_C::getInstance();
        if(sc == sc2)
        {
        	std::cout << "sc and sc2 is the same object." << std::endl;
        }
}

