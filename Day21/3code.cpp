#include<iostream>
#include<vector>
using namespace std;

void print(vector<int> &arr) {
  for (int i = 0; i < arr.size(); i++) {
    cout << arr[i] << " ";
  }
  cout << endl; 
}

int search(vector<int> &arr, int si, int ei, int tar) {

  if (si > ei) {
    return -1;
  }

  int mid = si + (ei - si) / 2;
  if (arr[mid] == tar) {
    return mid;
  }

  if (arr[si] <= arr[mid]) { // Left half is sorted

  if (arr[si] <= tar && tar < arr[mid]) { // Check if target is in the left half
      return search(arr, si, mid - 1, tar);
    } else { // Target is in the right half
      return search(arr, mid + 1, ei, tar);
    }
  } 
  
  else { // Right half is sorted
  
  if (arr[mid] < tar && tar <= arr[ei]) { // Check if target is in the right half
      return search(arr, mid + 1, ei, tar);
    } else { // Target is in the left half
      return search(arr, si, mid - 1, tar);
    }
  }
}

int main() {
  vector<int> arr = {4, 5, 6, 7, 0, 1, 2};
  int n = 7;
  print(arr); 
  cout << "idx :" << search(arr, 0, arr.size() - 1, 4) << endl;

  return 0;
}
