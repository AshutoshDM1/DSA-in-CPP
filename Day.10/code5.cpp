#include<iostream>
using namespace std;

int main ()
{
  int a = 5;
  int *ptr = &a;
  cout << ptr << endl;

  int arr[6] = { 4,6,2,7,2,10 };
  
  cout << arr << "\n";
  cout << arr[0] << "\n";
  cout << *(arr+1) << "\n";


  // passing the array name is same as passing the arr(pointer)

  return 0;
}  