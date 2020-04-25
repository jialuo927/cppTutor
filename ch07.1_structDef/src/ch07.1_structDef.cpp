//============================================================================
// Name        : 1_structDef.cpp
// Author      : Jia Luo
// Version     :
// Copyright   : SGG of WHU 2020-2025
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>
using namespace std;

struct Student  {             //声明一个结构体类型Student
	int    num;               //包括一个整型变量num
	string name;              //包括一个字符串对象name
	char   gender;            //包括一个字符变量gender
	int    age;               //包括一个整型变量age
	float  score;             //包括一个单精度型变量
	string addr;              //包括一个字符串对象addr
};                            //最后有一个分号

Student stu1={10001,"Zhang Xin",'f',18,93.5,"Wuhan"};
Student Stu_cpp[30];

int main() {
	Student * stuptr;
	stuptr=&stu1;
	cout << "Student num : "<<stu1.num<<endl;
	cout << "Student name: "<<stuptr->name<<endl; // prints

	return 0;
}
