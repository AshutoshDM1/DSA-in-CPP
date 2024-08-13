#include<iostream>
using namespace std;

int friendPairning (int n){
  if ( n == 1 | n == 2){
    return n ;
  }

  int ans1 = friendPairning (n - 1);
  int ans2 = friendPairning (n - 2);

  return ans1 + (n - 1 ) * ans2;
};

int main () {
  cout << "Friends Pairing Problem" << endl;
  int n =0;
  cout << "Enter the N :" << endl; 
  cin  >> n;
  cout << friendPairning(n);
  return 0;
}