//============================================================================
// Name        : 4_coutCtrl.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <iomanip>
using namespace :: std;

int main() {

  double a=123.456789012345;

  cout<<a<<endl;
  cout<<setprecision(9)<<a<<endl;
  cout<<setprecision(6)<<a<<endl;
  cout<<setiosflags(ios::fixed)<<a<<endl;
  cout<<setiosflags(ios::fixed)<<setprecision(8)<<a<<endl;
  cout.unsetf(ios::adjustfield|ios::basefield|ios::floatfield); //Recover default settings
  cout<<setiosflags(ios::scientific)<<a<<endl;
  cout<<setiosflags(ios::scientific)<<setprecision(4)<<a<<endl;
  cout.unsetf(ios::adjustfield|ios::basefield|ios::floatfield); //Recover default settings
  cout<<setiosflags(ios::fixed);
  cout<<setprecision(8)<<a<<endl;
  return 0;

}

