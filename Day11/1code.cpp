#include<iostream>
using namespace std;
// Printing subarrays of an array.
int main ()
{
  int arr[5] = {1, 2, 3, 4, 5};
  int n = sizeof (arr) / sizeof (int);
  cout <<"The Arr = ";
  for (int i = 0 ; i < n ; i++ ) {
    cout <<arr[i] << "," ;
  }
  cout << endl;
  int end = 0;
  cout << "Printing subarrays of an array : \n";
  for ( int i = 0 ; i < n ; i ++) {
    
    for ( int k = i  ; k < n ; k++){

      for (int j = i ; j < k+1 ; j++){

        cout << arr[j];
      }
      cout << " , ";
    }
    cout << "\n";
  }

  return 0;
}