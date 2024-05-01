#include<iostream>
using namespace std;
int main() {
  int n ;
	cout << "Enter how many prime Number you want to print: " << endl;
  cin >> n;
  bool check;
  for ( int i = 2; i <= n; i++ ) {
    check = false;
    for (int j = 2; j<i ;j++) {
      if (i % j == 0) {
        check = true;
      }
    }
    if ( check == false ) {
      cout << "The prime number is: " << i << endl;
    }
  }
  return 0;
}

