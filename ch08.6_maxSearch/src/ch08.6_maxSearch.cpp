//============================================================================
// Name        : 6_maxSearch.cpp
// Author      : Jia Luo
// Version     :
// Copyright   : SGG of WHU 2020-2025
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <iostream>
using namespace std;

class Array_max {
public:
	void set_value();        //对数组元素设置值
	void max_value();        //找出数组中的最大元素
	void show_value();       //输出最大值
private:
	int array[10];
	int max;
};

void Array_max::set_value() {      //成员函数定义，向数组元素输入数值
	int i;
	for (i=0;i<10;i++){
		cin>>array[i];
	}
}

void Array_max::max_value() {      //成员函数定义，找数组元素中的最大值
	int i;
	max=array[0];
	for (i=1; i<10; i++) {
		if(array[i]>max) max=array[i];
	}
}

void Array_max::show_value() {     //成员函数定义，输出最大值
	cout<<"max="<<max<<endl;
}

int main() {
	Array_max arr_max;
	arr_max.set_value( );     //调用set_value函数，向数组元素输入数值
	arr_max.max_value( );     //调用max_value函数，找出数组元素中的最大值
	arr_max.show_value( );    //调用show_value函数，输出数组元素中的最大值
	return 0;
}

