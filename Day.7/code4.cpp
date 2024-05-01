#include<iostream>
using namespace std;

int fact (int a );

int main() {
	cout << "Enter a Number to find the factorial of it :" << endl;
  int num;
	cin >> num;

	cout << "Factorial of the given number is :" << fact(num);
  return 0;
}

int fact(int a) {
  int fact = 1;
  for (int i = 1 ; i <= a ; i ++) {
    fact = fact * i;
  }
  return fact;
}
 