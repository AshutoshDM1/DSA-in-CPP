#include<iostream>
#include<vector>
using namespace std;

// First Occurrence of an vector using Recursion
// Did it Myself


int firstGet(vector<int> arr , int n ,int i) {
  if (arr.size() == i){
    return -1;
  }
  if(arr[i] == n){
    return i;
  }
  return firstGet(arr , n ,i+1);
}


int lastGet(vector<int> arr, int n, int i) {
  if (i < 0) {
    return -1;
  }
  if (arr[i] == n) {
    return i;
  }
  return lastGet(arr, n, i - 1);
} 

// True Recursion
int lastGetBydidi(vector<int> arr, int n, int i) {
  if (i == arr.size()){
    return -1;
  }
  int idx = lastGetBydidi(arr , n , i+1);
  
  if(idx == -1 && arr[i] == n){
     return i;
  }
  return idx;
} 

int main() {
  cout<<"Checking First and Last Occurrence of an vector using Recursion" <<endl;
  vector<int> arr1 = {1, 2, 3, 3, 3, 3, 4, 5};
  cout<<firstGet(arr1 , 3 , 0)  << endl;

  cout<<lastGet(arr1 , 3 , arr1.size())  << endl;
  cout<<lastGetBydidi(arr1 , 3 , 0)  << endl;
  return 0;
}
