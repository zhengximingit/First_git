#pragma once
#include<iostream>
using namespace std;
class Human
{
public:
	void eat(std::string name);
	
	void run(std::string name);
	void getname();
protected:
	void speak();
	int age;
	std::string name;
private:
	std::string hello;
};

class Man :public Human
{
public:
	Man();
	~Man();
	int height;
protected:
	void shave();
};
//
//Man::Man()
//{
//	std::cout<<"man构造函数" << std::endl;
//}
//Man::~Man()
//{
//	std::cout << "man析构函数" << std::endl;
//}

class Woman:public Human
{
public:
	Woman();
	~Woman();

private:
	void makeup();
};
//
//Woman::Woman()
//{
//	std::cout << "woman构造函数" << std::endl;
//}
//
//Woman::~Woman()
//{
//	std::cout << "woman析构函数" << std::endl;
//}


