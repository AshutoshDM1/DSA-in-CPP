#include<iostream>
using namespace std;


int main() {
  int arr[5] = {1,2,3,4,5};
  int n = sizeof(arr) / sizeof(arr[0]);
  int start = 0;
  int end = n - 1;
    for (int i = 0; i < n ; i++){
    cout << arr[i] << ",";
  }
  cout << '\n';
  while (start <= end ) {
  //do swap 
  int temp;
  temp = arr[start];
  arr[start] = arr[end];
  arr[end] = temp; 

  // swap(arr[start], arr[end]) // This swap function also can be used 
  start++;
  end--;
  }
  for (int i = 0; i < n ; i++){
    cout << arr[i] << ",";
  }
 return 0; 
}