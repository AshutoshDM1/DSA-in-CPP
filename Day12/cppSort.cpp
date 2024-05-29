#include<iostream>
#include<algorithm>
using namespace std;

int main ()
{
  int arr[5] = { 5, 4, 1 , 3, 2 };
  int n = sizeof (arr) / sizeof (int);

  for (int i = 0 ; i < n ; ++i) {
    cout << arr[i] << " " ;
  }

  cout << "\nArray After C++ Inbuilt Sort \n";

  // sort(arr , arr+8); // assending sort in cpp.
  sort(arr , arr+n , greater<int>());
  // descending sort in cpp.

  for (int i = 0 ; i < n ; ++i) {
    cout << arr[i] << " " ;
  }
  return 0;
}