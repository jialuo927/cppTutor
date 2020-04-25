//============================================================================
// Name        : 1_sturctPtrPar.cpp
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
	void print(Student *);         //函数声明，形参为指向Student类型数据的指针变量
	Student stu;
	Student *ptr=&stu;             //定义基类型为Student的指针变量ptr，并指向stu
	stu.num=10125;                 //以下5行对结构体变量各成员赋值
	stu.name="Wang Hua";
	stu.score[0]=73.5;
	stu.score[1]=87.0;
	stu.score[2]=79.5;
	print(ptr);                    //实参为指向Student类数据的指针变量

	return 0;
}

void print(Student *ptr) {         //定义函数，形参p是基类型为Student的指针变量
	int i;
	cout<<ptr->num<<" "<<ptr->name<<endl;
	for(i=0;i<3;i++){
		cout<<ptr->score[i]<<" ";
	}
	cout<<endl;
}

