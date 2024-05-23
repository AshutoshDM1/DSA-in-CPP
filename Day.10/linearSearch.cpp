#include<iostream>
using namespace std;

int linearSearch ()
{
  int marks[6] = {4,6,2,7,2,10};
  int key = 10;
  int idx = 0;
  int lenght = sizeof(marks)/sizeof(int);

  for (int i = 0; i < lenght ; i++)
  {
    if (key == marks[i]) {
      return i ;
    }
  }
  return -1;
}

int main() {
  cout << linearSearch (); 
  return 0;
}