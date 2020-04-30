//============================================================================
// Name        : 1_newSpace.cpp
// Author      : Jia Luo
// Version     :
// Copyright   : SGG of WHU 2020-2025
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>
using namespace std;

struct Student {          //声明结构体类型Student
	string name;
	int    num;
	char   gender;
};

int main() {
	Student *p;           //定义指向结构体类型Student的数据的指针变量
	p = new Student;      //用new运算符开辟一个存放Student型数据的空间
	p->name="Li Shan";    //向结构体变量的成员赋值
	p->num=10123;
	p->gender='f';
	cout<<p->name<<endl<<p->num<<endl<<p->gender<<endl;
	delete p;             //释放空间
	return 0;

	return 0;
}
