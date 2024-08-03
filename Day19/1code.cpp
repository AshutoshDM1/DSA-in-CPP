#include <iostream>
using namespace std;


int factorial(int n){
  if (n == 0){
    return 1;
  };
  return n * factorial(n - 1);
}

void show(int count) {
    cout << "This is a function." << endl;
    if (count < 5) {
      count++;
      show(count);
    }
}
int main() {
    int count = 0;
    // show(count);
    
    cout << "Hello World!" << endl;
    cout <<factorial(5)<< endl;
}
