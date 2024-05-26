#include<iostream>
using namespace std;
// kadanes algorithm

int main ()
{
  int arr[6] = {2, -3 , 6 ,-5 , 4 , 2};
  int n = sizeof (arr) / sizeof (int);
  cout <<"The Arr = ";
  for (int i = 0 ; i < n ; i++ ) {
    cout <<arr[i] << "," ;
  }
  int maxSum = 0 ;
  int curSum = 0;
  for (int i = 0 ; i < n ; i++) {
    curSum += arr[i];
    maxSum = max(curSum, maxSum);
    if (curSum < 0) {
      curSum = 0;
    }
  }
  cout <<"\nThe Max Sum = "<<maxSum;

  return 0;
}
