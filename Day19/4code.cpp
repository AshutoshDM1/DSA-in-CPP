#include <iostream>
using namespace std;


int sum(int n){
  if (n == 0){
    return 0; // base case for recursion
  };
  return n + sum(n - 1);
}

int main() {
    int count = 0;
    cout << "Enter a Number :" << endl;
    cin >> count;
    cout <<sum(count)<< endl;
}
 