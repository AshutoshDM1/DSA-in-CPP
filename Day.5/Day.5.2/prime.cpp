#include<iostream>
using namespace std;
int main() {
  cout << "Enter the number to check it is prime or not :" << endl;
  int num=0;
  int factors=0;
  cin >> num;
  for (int i=2; i < num; i++) {
    if (num % i == 0){
      factors++;
    }
  }
  cout << "The number has factor = " <<factors<< endl;
  if (factors > 0){
    cout << "Its not a prime number \n";
  }
  else {
    cout << "Its a prime number \n";
  }
}