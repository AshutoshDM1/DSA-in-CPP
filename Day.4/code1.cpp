// Conditional statement:
#include<iostream>
using namespace std;
int main() {
  int age;
  cout << "Please enter your age: ";
  cin >> age;
  if (age >= 18) {
     cout << "You are eligible to vote" << endl;
  }
  else {
    cout << "Sorry you are not eligible for voting." << endl;
  }
}

