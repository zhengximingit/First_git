#include "Human.h"
#include<iostream>

void Human::eat(std::string name)
{
	this->name = name;
	std::cout <<this->name<< "�Է�" << std::endl;
//	std::cout << name << std::endl;
}

void Human::run(std::string name)
{
	this->name = name;
	std::cout <<this->name<< "�ܲ�" << std::endl;
}

void Human::getname()
{
	std::cout << name << std::endl;
}

void Human::speak()
{
	std::cout << "˵��" << std::endl;
}

Man::Man()
{
	std::cout << "man���캯��" << std::endl;
}

Man::~Man()
{
	shave();
	std::cout << "man��������" << std::endl;
}

void Man::shave()
{
	std::cout <<name<< "�κ���" << std::endl;
}


Woman::Woman()
{
	std::cout << "woman���캯��" << std::endl;
}

Woman::~Woman()
{
	makeup();
	std::cout << "woman��������" << std::endl;
}

void Woman::makeup()
{
	std::cout <<name<< "��ױ" << std::endl;
}
