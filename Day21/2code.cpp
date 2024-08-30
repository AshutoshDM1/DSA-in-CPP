#include<iostream>
#include<vector>
using namespace std; 
// Quick Sort
// Time complexcity - O(nlogn)
// something time complexity - O(n^2)

void print(vector<int> &arr) {
  for (int i = 0; i < arr.size(); i++) {
    cout << arr[i] << " " ;
  }
  cout << endl; 
}

int partition(vector<int> &arr, int si, int ei) {
  int i = si-1;
  int pivot = arr[ei]; 

  for (int j=si; j<ei; j++){
    if(arr[j] < pivot){
      i++;
      swap(arr[i], arr[j]);
    }
  }
  i++;
  swap(arr[i], arr[ei]);
  return i;
}

void quick(vector<int> &arr, int si, int ei) {

  if (si >= ei){
    return;
  }
  int pivotidx =  partition(arr, si, ei);
  quick(arr, si, pivotidx-1);
  quick(arr, pivotidx+1, ei);

}

int main (){
  cout << "Hello World" << endl;
  vector<int> arr = {6, 3, 9, 5, 2, 8};
  print(arr);
  quick(arr, 0, arr.size()-1);  
  print(arr);
  return 0;
}