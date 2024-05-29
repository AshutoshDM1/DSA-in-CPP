#include<iostream>
#include<climits>
using namespace std;

int main ()
{
  int arr[8] = { 1, 4, 8, 5, 4, 1 , 3, 2 };
  int n = sizeof(arr) / sizeof(int);

  for (int i = 0; i < n; ++i) {
    cout << arr[i] << " ";
  }
  cout << "\nArray After counting Sort \n";
  
  int fre[10000];
  int minVal = INT_MAX, maxVal = INT_MIN;

  // Find min and max values, and populate frequency array
  for (int i = 0; i < n; i++) {
    fre[arr[i]]++;
    minVal = min(minVal, arr[i]);
    maxVal = max(maxVal, arr[i]);
  }

  // Sort the array using the frequency array
  for (int i = minVal, j = 0; i <= maxVal; i++) {
    while(fre[i] > 0) {
      arr[j++] = i;
      fre[i]--;
    }
  }

  for (int i = 0; i < n; ++i) {
    cout << arr[i] << " ";
  }

  return 0;
}
