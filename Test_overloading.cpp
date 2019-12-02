#include "Test_overloading.h"
#include<iostream>
void  Test_overloading::overloading(int a,int b)
{
	int d;
	d = a + b;
	std::cout << d << std::endl;
}

void Test_overloading::overloading(int a, int b, int c)
{
	int d;
	d = a + b + c;
	std::cout << d << std::endl;
}

void Test_cover::overloading(int a, int b)
{
	Test_overloading::overloading(a, b);
	int h;
	h = a * b;
	cout << h << endl;
}

Friend_boy::Friend_boy()
{
	d = 0;
	
}
//int Friend_boy::g = 0;
void Friend_boy::fun3()
{
	
	d = 10;
	g = g + 1;
	cout << g << d << endl;
}

void Friend_boy::fun(int aa, int bb, int cc)
{
	
	cout << "lllllllllllll00" << endl;
	
	Friend_boy boy2;
	boy2.d = 1;
	boy2.g = 4;
	cout << g << endl;
	
	Friend qq;
	qq.a = aa;
	qq.b = bb;
	qq.c = cc;

    cout << qq.a << qq.b << qq .c << endl;
}

void Friend_girl::fun2()
{
	a = 123;
	b = 345;
	cout << a << b << endl;
	//c = 456;
}

Animal::Animal()
{
}

Animal::~Animal()
{
	cout << "基类析构" << endl;
}

void Animal::breathe()
{
	cout << "动物呼吸" << endl;
}

Rabbit::Rabbit()
{
}

Rabbit::~Rabbit()
{
	cout << "派生类析构" << endl;
}

void Rabbit::breathe()
{
	cout << "兔子呼吸" << endl;
}

void Rabbit::jump()
{
	cout << "兔子跳跃" << endl;

}

Sum::Sum()
{
	i = 0; 
	
}

Sum::Sum(int i)
{
	this->i = i;
	
}

Sum Sum::operator+(Sum& c2)
{
	Sum c;
	c.i = i + c2.i;
	
	return c;
}

Sum Sum::operator-(Sum& c2)
{
	Sum c;
	c.i = i - c2.i;

	return c;
}

Sum Sum::operator*(Sum& c2)
{
	Sum c;
	c.i = i * c2.i;

	return c;
}

Sum  Sum::operator/(int & t)
{
	Sum c;
	c.i = i / t;

	return c;
}

void Sum::play(Sum &c3)
{
	cout << c3.i<<endl;
}

ostream& operator<<(ostream& os, Sum&c3)
{
	os << c3.i << endl;
	// TODO: 在此处插入 return 语句
	return os;
}

istream& operator>>(istream& is, Sum&c3)
{
	is >> c3.i;
	return is;
	// TODO: 在此处插入 return 语句
}

void A::play()
{
	cout << a << endl;
}

void B::play()
{
	cout << b << endl;
}

void C::play()
{
	cout << c << endl;
}
