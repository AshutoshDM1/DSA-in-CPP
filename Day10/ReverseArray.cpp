#include<iostream>
using namespace std;

int main ()
{
  int marks[6] = {4,6,2,7,2,10};
  int n = sizeof(marks)/sizeof(int);

  int copyArr[n];
  for (int i = 0; i < n ; i++)
  {
    int j = n - i - 1;
     // reverse array index.
    copyArr[j] = marks[i];
  }
  
  for (int i = 0; i < n ; i++){
    cout << marks[i] << ",";
  }
    cout <<  "\n";

  for (int i = 0; i < n ; i++){
    cout << copyArr[i] << ",";
  }
  return 0;
}     