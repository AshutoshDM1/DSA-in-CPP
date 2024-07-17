#include<iostream>
using namespace std;

int bitmask(int n , int i) {
  int bitmask = 1 << i;
  if (!(n & bitmask)) {
    return 0;
  }
  else {
    return 1;
  }
}
int bitmaskchange(int n , int i) {
  int bitmask = 1 << i;
  return ( n | bitmask );
}

int main() {
  cout << "The Enter a bitmask number : \n" ;
	int i = 0;
  cin >> i;
  cout << "The Enter a number : \n" ;
	int num = 0;
  cin >> num;
  cout << bitmask(i , num) << endl;
  cout << bitmaskchange(i , num) << endl;
}