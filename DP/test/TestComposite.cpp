/*
 * TestComposite.cpp
 *
 *  Created on: 2013-4-3
 *      Author: Administrator
 */


#include "test.h"
#include "../Composite/Directory.h"
#include "../Composite/Folder.h"
#include "../Composite/File.h"


#include <iostream>

void testComposite()
{
	std::cout << "--------------------test Composite[start]----------------------" << std::endl;

	Directory * root = new Folder("D:/");
	Directory * fold1 = new Folder("color");
	Directory * fold2 = new Folder("pic");
	root->add(fold1);
	root->add(fold2);

	Directory * file11 = new File("yellow.txt");
	Directory * file12 = new File("gray.xml");
	fold1->add(file11);
	fold1->add(file12);

	Directory * file21 = new File("beauty.png");
	Directory * file22 = new File("good.gif");
	fold2->add(file21);
	fold2->add(file22);

	root->show();

	root->remove(file11);
	root->show();

	fold1->remove(file11);
	root->show();
	std::cout << "--------------------" << std::endl;
	root->getChild(2)->show();

	delete root;
	delete fold1;
	delete fold2;
	delete file11;
	delete file12;
	delete file21;
	delete file22;

	std::cout << "--------------------test Composite[end  ]----------------------" << std::endl;
}

