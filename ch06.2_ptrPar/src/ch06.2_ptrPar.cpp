//============================================================================
// Name        : 2_ptrPar.cpp
// Author      : Jia Luo
// Version     :
// Copyright   : SGG of WHU 2020-2025
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

void swap(int *p1,int *p2) {        //函数将*p1的值与*p2的值交换
	int temp;
	temp=*p1;
	*p1=*p2;
	*p2=temp;
}

int main() {
	int *ptr_1,*ptr_2,a,b;  //定义指针变量ptr_1,ptr_2，整型变量a,b

	cin>>a>>b;
	ptr_1=&a;                           //使ptr_1指向a
	ptr_2=&b;                           //使ptr_2指向b
	if(a<b)
		swap(ptr_1,ptr_2);              //使*ptr_1和*ptr_2互换
	cout<<"max="<<a<<" min="<<b<<endl;  //a已是大数，b是小数
}

/*void swap(int *p1,int *p2) {
	int *temp;
	*temp=*p1; //错误: 使用了未初始化的局部变量temp
	*p1=*p2;
	*p2=*temp;
}*/

/*void swap(int x,int y) {
	int temp;
	temp=x;
	x=y;
	y=temp;
}*/

/*void swap(int *p1, int *p2) {
	int *temp;
	temp=p1;
	p1=p2;
	p2=temp;
}*/
