// Operators in C++

#include<iostream>	
#include<cmath>	

using namespace std;  
int main() 
{
  // Binary Operator
  int a = 10 , b = 20;
  cout <<  " a + b = " << (a + b) <<endl;
  cout <<  " a - b = " << (a - b) <<endl;
  cout <<  " a * b = " << (a * b) <<endl;
  cout <<  " a / b = " << (a / b) <<endl;
  cout <<  " a % b = " << (a % b) <<endl;
  //  Unary Operator
  a++;
  cout << " a++ = " << a << endl;
  a--;
  cout << " a++ = " << a << endl;

  // using pre and post increment operator in C++

  int c = 15;
  //1. using post increment 
  int d = c++;
  cout << " c = " << c << endl; //16
  cout << " d = " << d << endl; //15
  //2. using pre increment 
  d = ++c;
  cout << " c = " << c << endl; //17
  cout << " d = " << d << endl; //17

  //3. using post decrement
  int e = c--;
  cout << " c = " << c << endl; //16
  cout << " e = " << e << endl; //17

  //4. using pre decrement
  e = --c;
  cout << " c = " << c << endl; //15
  cout << " e = " << e << endl; //15
  return 0;
}


