#include<iostream>
using namespace std;

void oddrEven(int n) {
  if (!(n & 1)) {
    cout << "\nEven Number\n";
  }
  else {
    cout << "\nOdd Number\n";
  }
}
int main() {
  cout << "The Enter a number : \n" ;
	int num = 0;
  cin >> num;
  oddrEven(num);
}

