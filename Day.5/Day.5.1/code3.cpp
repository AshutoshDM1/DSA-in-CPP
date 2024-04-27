#include<iostream>
using namespace std;
int main() {
  int num=0;
  int i=0;
  cout<<"Enter a number: \n";
  cin>>num;
  while (i < 10) {
    num = num + 1;
    cout << num <<endl; 
    i++;
  }
  return 0;
}