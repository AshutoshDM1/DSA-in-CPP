#include<iostream>
using namespace std;

int main () 
{
  int a = 10;
  cout << "a = " << a << endl;
  cout << "a = " << *(&a) << endl;//Dereference Operator 
  int *p = &a;

  cout << "a = " << *(p) << endl;
  int *b = NULL; //NULL POINTER
  // cout <<<< *(b) << endl;  //Null Pointers are not allowed to be Dereference it will give a error called segmentation fault

  return 0;
}