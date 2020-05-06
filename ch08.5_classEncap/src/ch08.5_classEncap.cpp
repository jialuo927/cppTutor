//============================================================================
// Name        : 5_classEncap.cpp
// Author      : Jia Luo
// Version     :
// Copyright   : SGG of WHU 2020-2025
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>
using namespace std;

class Student {               //公有的学生类
private:
	string name;              //私有的name
public:
	Student(string stuName) { //公用的构造函数
		name = stuName;
	}
	string getName() {        //公用函数
		return name;
	}
};

int main() {
    Student * stu1 = new Student("Li Ming");
    cout <<stu1->getName()<<endl; //Student对象的操作
	return 0;
}
