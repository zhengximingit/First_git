#include<iostream>
#include "Human.h"
#include"Test_overloading.h"
using namespace std;
int Friend_boy::g = 0;
int main()
{
	Human human;	
	human.eat("С��");
	human.getname();
	human.run("С��");
	human.getname();
	Man man;
	
	man.eat("����");
	man.getname();
	Woman woman;
	woman.run("Ů��");

	cout << "���أ�����_____________________________________" << endl;

	Test_overloading test;
	test.overloading(3,3,3);
	test.overloading(3, 4);
	Test_cover test2;
	test2.overloading(10, 20);

	cout << "��Ԫ___________________________________________________________" << endl;
	Friend_boy ::fun(1,2,3);
    Friend_boy boy;
	boy.fun(10,20,30);
	boy.fun3();
	Friend_girl girl;
	girl.fun2();

	cout << "�鷽��+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++" << endl;
	Animal* point = new Rabbit;
	point->breathe();

	cout << "++++++++++++++++++++++++++++++++++++++++++++++++_______________________" << endl;
	Rabbit* point2 = new Rabbit;
	point2->breathe();
	point2->jump();
	delete(point);
	delete(point2);

	cout << "���������*********************************************************************" << endl;
	Sum c1(70);
	Sum c2(30);
	Sum c3;
	int t;
	t = 2;
	int k;
	k=1;
	
	c3 = c1 + c2;//��������ر�Ϊc3=c1.operator+(c2)
	c3.play(c3);
	c3 = c1 * c2;
	c3.play(c3);
	c3 = c1 - c2;
	c3.play(c3);
	cout << "ttttttttttttttttttttt" << endl;
	c3 = c1 / t;
	c3.play(c3);
	cout << "rrrrrrrrrrrrr" << endl;
	cout << "���ز�����$$$$$$$$$$$$$$$$$$$$$$$$$" << endl;
	cin >> c3;
	cout << c3;
	cout << "�����%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%" << endl;
	C c(1, 2, 3);
	c.play();
	A a(2);
	a.play();
	B b(2,3);
	b.play();
	
	return 0;
}