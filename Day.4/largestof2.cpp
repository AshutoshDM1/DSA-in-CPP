#include<iostream>
using namespace std;
int main() {
  cout << "Enter two Number It will be the largest of them \n";
  int num1 , num2 ;
  cout <<  "Number 1 : " ;
  cin >> num1;
  cout <<  "Number 2 : " ;
  cin >> num2;
  if (num1 > num2) {
     cout << "Largest Number is : "<< num1 << endl;
  }
  else {
    cout << "Largest Number is : "<< num2 << endl;
  }
return 0; }

