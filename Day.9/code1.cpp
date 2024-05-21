#include<iostream>

using namespace std;

int main () 
{
 int a;
 int *b = &a; 
 // Here * is used to declear point variable 
 // & is use for refering address of a 

  cout << &a <<endl;
  cout << b <<endl;
  int ** c =  &b;// Pointer to pointer variable
  cout << &b <<endl;
  cout << c <<endl;
 return 0;
}