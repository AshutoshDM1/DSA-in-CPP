#include<iostream>
using namespace std;

// Sorted Array using Recursion


bool isSortedArr(int arr[] , int n , int i) {
  if (arr[i] > arr[i+1]) {
    return false;
  }
  if (i == n-1){
    return true;
  }
  return isSortedArr(arr , n , i+1);
}

int main() {
  cout<<"Check ing if array is sorted or not" <<endl;
  int arr1[5] = {1, 2 , 3 , 4 , 5};
  int arr2[5] = {1, 3 , 2 , 4 , 5};
  cout<<isSortedArr(arr1 , 5 , 0)  << endl;
  cout<<isSortedArr(arr2 , 5 , 0)  << endl;
  return 0;
}
