#include <iostream>
using namespace std;

int BruteForce (int number, int power) {
  if(power == 1){
    return number;
  }
  return number * BruteForce(number,power-1);
}

// number^ power logn

int AruteForce (int number, int power) { 
  if(power == 0){
    return number;
  }


  if(power%2 == 0){
  return AruteForce(number,power/2);
  }


  if(power%2 == 1){
  return number * AruteForce(number,power/2) ;
  }
} 


int main() {
  int num=0, power=0;
  cout << "Enter a number: " << endl;
  cin >> num;
  cout << "Enter a power: " << endl;
  cin >> power;
  cout << "The result is: " << endl;
  cout <<BruteForce(num,power) << endl;
  cout <<AruteForce(num,power) << endl;
}

