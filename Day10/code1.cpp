#include<iostream>
using namespace std;

int main ()
{
  int marks[5]={2,3,5,7};
  cout<< marks[0] << endl;
  cout<< marks[1] << endl;
  cout<< marks[2] << endl;
  cout<< marks[3] << endl;

  int n = sizeof(marks)/sizeof(int);
  cout << "size of array = "<<n ;
  return 0;
} 
