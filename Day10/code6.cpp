// Pointer Arithmetic
#include<iostream>
using namespace std;

int main ()
{
  int a = 10;
  int * ptr1 = &a;

  cout << ptr1 << endl;
  ptr1++;
  cout << ptr1 << endl;
  
  char b = 'a';
  char * ptr2 = &b; // Use a char pointer for the char variable

  cout << static_cast<void*>(ptr2) << endl; // Cast to void* for proper output
  ptr2++;
  cout << static_cast<void*>(ptr2) << endl;


  // addition of number in pointers
  cout << ptr1+1 << endl;


  return 0;
}
