#include<iostream>
using namespace std;

int main ()
{
  int marks[6] = {4,6,2,7,2,10};
  int max=0;
  int lenght = sizeof(marks)/sizeof(int);

  for (int i = 0; i < lenght ; i++){
    if(max < marks[i]) {
      max = marks[i];
    }
  }
  cout << "The largest Number in the array is :" << max ;
  return 0;
}