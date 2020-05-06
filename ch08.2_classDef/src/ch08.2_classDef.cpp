//============================================================================
// Name        : 2_classDef.cpp
// Author      : Jia Luo
// Version     :
// Copyright   : SGG of WHU 2020-2025
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>
using namespace std;

class Student {                      //声明类类型
private:                             //声明以下部分为私有的
	int    num;
	string name;
	char   gender;
public:                              //声明以下部分为公用的
	void display() {
		cout<<"num: "<<num<<endl;
		cout<<"name:"<<name<<endl;
		cout<<"gender:"<<gender<<endl;
	}
};

Student  stu1, stu2;               //定义了两个学生对象

int main() {
	stu1.display();
	cout << "define a class and its object" << endl;
	return 0;
}
