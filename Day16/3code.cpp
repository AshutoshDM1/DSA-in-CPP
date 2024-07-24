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
int setIthbit(int n , int i) {
  int bitmask = 1 << i;
  return ( n | bitmask ); 
}
int clearIthbit(int n , int i) {
  int bitmask = ~(1 << i);
  return n & bitmask; 
}

bool isPowerOf2(int num){
  if(!(num & (num - 1))){
    return true; 
  }
  else{
    return false;
  }
}

int main() {
  cout << "The Enter a bitmask number : \n" ;
	int i = 0;
  cin >> i;
  cout << "The Enter a number : \n" ;
	int num = 0;
  cin >> num;

  cout << clearIthbit(i , num) << endl;
}