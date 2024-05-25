#include<iostream>
using namespace std;

int binarySearch (int *arr,int n , int key ) {
  int start = 0;
  int end = n - 1;
  while(start <= end) {

  int mid = (start + end) /2;

  if (arr[mid] == key) {
    return mid;
  }

  else if (arr[mid] < key){
    start = mid+1;
  }
  else {
    end = mid-1;
  }}
  return -1;
}

int main ()
{
  int arr[7] = {1,3,4,5,7,8,10};
  int n = sizeof(arr)/sizeof(int);
  int key = 10;
  for (int i = 0; i < n ; i++)
  {
    cout << arr[i] << ",";
  }
  cout << "\n";
  cout << "idx No :" << binarySearch(arr, n , key) << "\n";


  return 0;
}