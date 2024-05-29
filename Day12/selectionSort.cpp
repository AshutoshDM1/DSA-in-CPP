#include<iostream>
using namespace std;

int main ()
{
  int arr[5] = { 5, 4, 1 , 3, 2 };
  int n = sizeof (arr) / sizeof (int);

  for (int i = 0 ; i < n ; ++i) {
    cout << arr[i] << " " ;
  }

  cout << "\nArray After Selection Sort \n";

  for (int i = 0 ; i < n-1 ; ++i) {
    int minIdx = i ;
    for (int j = i + 1 ; j < n ; j++) {
      if (arr[j] < arr[minIdx]) {
        minIdx = j ;
      }
    }
    swap (arr[minIdx], arr[i]) ;
  }
  for (int i = 0 ; i < n ; ++i) {
    cout << arr[i] << " " ;
  }
  return 0;
}