//============================================================================
// Name        : 12_staticVar.cpp
// Author      : Jia Luo
// Version     :
// Copyright   : SGG of WHU 2020-2025
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int sum_times(int i) {
	int j=0;
	static int s=0;

	j++;
	s++;
	if (i == 0)
		return s;
	else
		return j;

}

int main() {
	int i;

	for(i=1; i<=10; i++){
		cout<<"No."<<i<<" is "<<sum_times(0)<<"\t"<<sum_times(1)<<endl;
	}

	cout << "End of staticVar" << endl;
	return 0;
}
