#include<iostream>
using namespace std;

bool cleartillIthbit(int num , int i){
  int bitmask = (~0) << i;
  num = num & bitmask;
  cout << num << endl;
}

int main() {
  cout << "The Enter a number : \n" ;
	int num = 0;
  cin >> num;
  cout << "The Enter a bitmask number : \n" ;
	int i = 0;
  cin >> i;

  cleartillIthbit(num , i);
}