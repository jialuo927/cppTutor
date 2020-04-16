//============================================================================
// Name        : 2_doubleType.cpp
// Author      : Jia Luo
// Version     :
// Copyright   : SGG of WHU 2020-2025
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	float  r_f, r_f1;
	double r_d;

	r_f = 2020.0123;
	r_d = 2020.0123L;
	cout<<fixed<<setprecision(12); //To set the output precision
    cout <<"double 2020.0123 = "<<r_d<<",\t"<<"float 2020.0123 = "<<r_f<<endl;
	r_d = r_f;
    cout <<"double type evaluated with float  2020.0123 = "<<r_d<<endl;
    r_d = (double)r_f;
    cout <<"double type evaluated with casted 2020.0123 = "<<r_d<<endl;

    r_f = 20.21;
    r_f1= 20.25;
    cout <<"float  20.21 = "<<(double)r_f<<",\t"<<"float 20.25 = "
    	<<(double)r_f1<<endl;
    r_d = 20.21;
    cout<<"double 20.21 = "<<r_d<<endl;
	cout << "End of double type test" << endl; // prints

	return 0;
}
