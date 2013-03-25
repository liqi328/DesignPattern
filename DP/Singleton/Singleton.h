/*
 * Singleton.h
 *
 *  Created on: 2013-3-25
 *      Author: Administrator
 */

#ifndef SINGLETON_H_
#define SINGLETON_H_



#include <iostream>
using namespace std;

class Singleton
{
private:
        int test;
        Singleton() { cout << "new" <<endl; test = 0; }
        ~Singleton() { cout << "delete" << endl; }

public:
        static Singleton *GetInstance()
        {
                static Singleton singleton;
                return &singleton;
        }
        void SetValue(int v) { test = v; }
        int GetValue() { return test; }
};





#endif /* SINGLETON_H_ */
