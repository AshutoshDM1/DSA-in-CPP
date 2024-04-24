// Logical Operators
#include <iostream>
using namespace std;
int main() 
{
  int a = 10, b = 20;
  int c = 10;

  cout << "using && " << ((a > b) && (a >= b)) << endl; // AND
  cout << "using || " << ((a == c) || (a != b)) << endl; // OR
  cout << "using ! " << !(a == c) << endl; // NOT
  return 0;
}