//============================================================================
// Name        : 1_structRefPar.cpp
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
	void print(Student &);         //函数声明，形参为Student类型变量的引用
	Student stu;
	stu.num=10125;                 //以下5行对结构体变量各成员赋值
	stu.name="Wang Hua";
	stu.score[0]=73.5;
	stu.score[1]=87.0;
	stu.score[2]=79.5;
	print(stu);                    //实参为结构体Student变量

	return 0;
}

void print(Student &stur) {         //定义函数，形参p是基类型为Student的指针变量
	int i;
	cout<<stur.num<<" "<<stur.name<<endl;
	for(i=0;i<3;i++){
		cout<<stur.score[i]<<" ";
	}
	cout<<endl;
}
