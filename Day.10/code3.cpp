#include<iostream>
using namespace std;

int main ()
{
  int n ;
  cout << "Enter the size of array : \n";
  cin >> n;

  int marks[n];

  int lenght = sizeof(marks)/sizeof(int);
  cout << "Enter elements of array : \n";

    for (int i = 0; i < lenght ; i++)
  {
    cin >> marks[i];
  }

  for (int i = 0; i < lenght ; i++)
  {
    cout << marks[i] << ",";
  }
  return 0;
}