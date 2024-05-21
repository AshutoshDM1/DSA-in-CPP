#include<iostream>
using namespace std;


void changeA(int a){
  a = 10;
  cout << "Value of A in void function 1 is :"<<a<<endl;
}// This is called call by reference.


void changeMainA(int *a){
  *(a) = 20;
  cout << "Value of A in void function 2 is :"<<*a<<endl;
}// This is called call by value.

void changerefA(int &p){
  p = 30;
  cout << "Value of A in void function 3 is :"<<p<<endl;
}// This is called call by value using reference variable.

int main () 
{
  int a = 5;

  // Call by reference
  changeA(a);
  cout << "The value of A after calling the changeA function is :"<<a<<endl;

  // Call by value (call by pointer)
  changeMainA(&a);
  cout << "The value of A after calling the changeMainA function is :"<<a<<endl;

  // Call by value using reference variable.
  changerefA(a);
cout << "The value of A after calling the changerefA function is :"<<a<<endl;  return 0;
}