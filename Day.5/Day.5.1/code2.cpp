// Print sum of first N Natural Numbbers
#include<iostream>
using namespace std;
int main() {
  int n=0 , sum=0 ;
  cout<<"Enter that how many number you want to add: ";
  cin>>n;
  for (int i = 1; i <= n; i++) {
    sum = sum + i;
  }
  cout  << "Sum of first N Natural Numbers is :" << sum;
  return 0;
}