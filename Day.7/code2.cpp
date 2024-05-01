#include<iostream>
using namespace std;

int sum (int a, int b) { // a , b are parameters
  int sum = a + b;
  return sum;
}

int sum2 (int a, int b=2) { // b is default parameter 
  int sum2 = a + b;
  return sum2;
}
int main() {
	cout << "Function Sum =" << endl;
  cout << sum(20, 10) << endl;  //here 20 , 10 are arguments
  cout << sum2(10); //here 10 is argument which call default parameter value 2 funtion 
  return 0;
}

