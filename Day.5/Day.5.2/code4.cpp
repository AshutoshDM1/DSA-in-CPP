#include<iostream>
using namespace std;
int main() {
  int num = 0;
  do {
    cout << "Here is a Number "<< num << endl;
    num++;
    if(num == 3) {
      break;
    }
  }
  while (num < 5);
  return 0;
};