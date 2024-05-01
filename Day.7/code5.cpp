#include<iostream>
using namespace std;

int num = 10;  // global variable

int number () {
  int num = 2; // local variable
  cout << num ; 
}
int main() {
	cout << num << endl;
  return 0;
}

