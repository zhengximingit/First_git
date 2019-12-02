#include "Human.h"
#include<iostream>

void Human::eat(std::string name)
{
	this->name = name;
	std::cout <<this->name<< "吃饭" << std::endl;
//	std::cout << name << std::endl;
}

void Human::run(std::string name)
{
	this->name = name;
	std::cout <<this->name<< "跑步" << std::endl;
}

void Human::getname()
{
	std::cout << name << std::endl;
}

void Human::speak()
{
	std::cout << "说话" << std::endl;
}

Man::Man()
{
	std::cout << "man构造函数" << std::endl;
}

Man::~Man()
{
	shave();
	std::cout << "man析构函数" << std::endl;
}

void Man::shave()
{
	std::cout <<name<< "刮胡子" << std::endl;
}


Woman::Woman()
{
	std::cout << "woman构造函数" << std::endl;
}

Woman::~Woman()
{
	makeup();
	std::cout << "woman析构函数" << std::endl;
}

void Woman::makeup()
{
	std::cout <<name<< "化妆" << std::endl;
}
