#include<iostream>
using namespace std;

int sum (int a, int b){
  return a+b;
}
int sum (double a, double b){ 
// Function Overloading
// Using same funtion name for different parameters
  return a+b;
}

int main() {
	cout << "Function Overloading" << endl;
	cout << sum(3,5) << endl;
	cout << sum(3.5, 5.5) << endl;
  return 0;
}

