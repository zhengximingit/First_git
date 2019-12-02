#pragma once
#include <istream>
using namespace std;
class Test_overloading
{
public:
	void overloading(int a,int b);
	void overloading(int a, int b,int c);
};

class Test_cover :public Test_overloading
{
public:
	void overloading(int a, int b);


};

class Friend
{
public:
	 int a;
protected:
	 int b;

private:
	 int c;
	
	friend class Friend_boy;
};

class Friend_boy
{
public:
	Friend_boy();
	int d;
	void  fun3();
	static void fun(int aa,int bb,int cc);
private:
	static int g;
};

class Friend_girl :protected Friend
{
public:
	int h;
	void fun2();
protected:
	int j;

};

class Animal
{
public: 
	Animal();
	virtual ~Animal();
	virtual void breathe()=0;

};

class Rabbit:public Animal
{
public:
	Rabbit();
	~Rabbit();
	void breathe();
	void jump();

};

class Sum 
{
public:
	Sum();
	Sum(int i);
	
	Sum operator + (Sum &c2);
	Sum operator - (Sum& c2);
	Sum operator * (Sum& c2);
	Sum operator / (int & t);
	friend ostream& operator << (ostream&, Sum&);
	friend istream& operator >> (istream&, Sum&);
	void play(Sum &c3);
private:
	int i;
	
};

class A
{
public:
	A(int i) :a(i){};
	void play();
private:
	int a;
};

class B:virtual public A
{
public:
	B(int i ,int j ) :b(i),A(j) {};
	void play();
private:
	int b;
};

class C: public B
{
public:
	C(int i, int j ,int k):c(i),B(j,k),A(j){};
	void play();
private:
	int c;
};