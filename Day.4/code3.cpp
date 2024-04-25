#include <iostream>
using namespace std;
int main()
{
  string ispass;
  int marks ;
  cout << "Enter you marks of Exam :\n";
  cin >> marks ; 
  ispass = marks >= 33 ? "pass" : "fail" ;
  cout <<"Result is:" <<ispass <<"\n";

  return 0 ;
}