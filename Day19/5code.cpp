#include <iostream>
using namespace std;


int fibonacci(int n){
  if (n == 0){
    return 0; // base case for recursion
  };
  if (n == 1){
    return 1; // base case for recursion
  };
  return fibonacci(n-1)+fibonacci(n-2);
}

int main() {
    int count = 0;
    cout << "Enter a Number :" << endl;
    cin >> count;
    cout <<fibonacci(count)<< endl;
}
 