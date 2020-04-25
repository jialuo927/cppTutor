//============================================================================
// Name        : 1_structPar.cpp
// Author      : Jia Luo
// Version     :
// Copyright   : SGG of WHU 2020-2025
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>
using namespace std;
struct Student{                    //声明结构体类型Student
	int num;
	string name;                   //函数声明，形参类型为结构体Student
	float score[3];
};
int main() {
	void print(Student);           //函数声明，形参类型为结构体Student
	Student stu;                   //定义结构体变量
	stu.num=10125;                 //以下5行对结构体变量各成员赋值
	stu.name="Wang Hua";
	stu.score[0]=73.5;
	stu.score[1]=87.0;
	stu.score[2]=79.5;
	print(stu);                    //调用print函数，输出stu各成员的值
	return 0;
}

void print(Student stu) {
	int i;
	cout<<stu.num<<" "<<stu.name<<endl;
	for(i=0;i<3;i++){
		cout<<stu.score[i]<<" ";
	}
	cout<<endl;
}
