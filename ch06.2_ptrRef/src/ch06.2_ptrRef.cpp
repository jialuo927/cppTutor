//============================================================================
// Name        : 2_ptrRef.cpp
// Author      : Jia Luo
// Version     :
// Copyright   : SGG of WHU 2020-2025
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int *p1,*p2,*p,a,b;
	cin>>a>>b;                            //输入两个整数
	p1=&a;                                //使p1指向a
	p2=&b;                                //使p2指向b
	if(a<b){                              //如果a<b就使p1与p2的值交换
		p=p1;p1=p2;p2=p;                  //将p1的指向与p2的指向交换
	}
	cout<<"a="<<a<<" b="<<b<<endl;
	cout<<"max="<<*p1<<" min="<<*p2<<endl;

	return 0;
}
