#include<iostream>
using namespace std;
// Max Subarray sum optimize way TC =     O(n2)
int main ()
{
  int arr[6] = {2, -3 , 6 ,-5 , 4 , 2};
  int n = sizeof (arr) / sizeof (int);
  cout <<"The Arr = ";
  for (int i = 0 ; i < n ; i++ ) {
    cout <<arr[i] << "," ;
  }
  cout << endl;
  int end = 0;
  int maxSubArray = -9999999 ; // INT_MIN is not working
  cout << "Printing subarrays of an array : \n";
  for ( int i = 0 ; i < n ; i ++) {
    int curSum = 0 ;
    for ( int k = i  ; k < n ; k++){
      curSum += arr[k];
      if(curSum > maxSubArray) {
        maxSubArray = curSum ;
      }
      cout << curSum;
      cout << " , ";
    }
    cout << "\n";
  }
  cout << "The Max Subarray Sum = " << maxSubArray << endl;
  return 0;
}
