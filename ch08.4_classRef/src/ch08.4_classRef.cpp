//============================================================================
// Name        : 4_classRef.cpp
// Author      : Jia Luo
// Version     :
// Copyright   : SGG of WHU 2020-2025
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class Time {
public:
		int   hour;
		int   minute;
		float second;
};

Time start_time, *ptr_time;  //定义对象start_time和指针变量ptr_time

int main() {
	Time &t=start_time;          //定义Time类引用变量t，并使之初始化为start_time
	cout<<t.hour;        //输出对象start_time中的成员hour
	return 0;
}
