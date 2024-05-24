#include<iostream>
using namespace std;

int main ()
{
  int marks[6] = {4,6,2,7,2,10};
  int lenght = sizeof(marks)/sizeof(int);

  for (int i = 0; i < lenght ; i++)
  {
    cout << marks[i] << "\n";
  }
  return 0;
}     