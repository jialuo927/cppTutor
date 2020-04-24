//============================================================================
// Name        : 2_ptrDef.cpp
// Author      : Jia Luo
// Version     :
// Copyright   : SGG of WHU 2020-2025
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int a=100, b=10;                      //定义整型变量a,b
	int *ptr_1, *ptr_2;                   //定义指针变量

	ptr_1=&a;                             //把变量ａ的地址赋给ptr_1
	ptr_2=&b;                             //把变量ａ的地址赋给ptr_2
	cout<<a<<" "<<b<<endl;                //输出a和b的值
	cout<<*ptr_1<<" "<<*ptr_2<<endl;      //输出*ptr_1和*ptr_2的值

	return 0;
}
