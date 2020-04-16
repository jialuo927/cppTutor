//============================================================================
// Name        : 2_unsignedType.cpp
// Author      : Jia Luo
// Version     :
// Copyright   : SGG of WHU 2020-2025
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	unsigned short a;
	short int b= -1;
	a=b;
	cout << "short b = "<<b<<endl;
	cout << "unsigned short a evaluated with b"<<endl;
	cout << "unsigned short a = "<<a<<endl;
	cout << "End of unsigned type test" << endl; // prints unsigned type
	return 0;
}
