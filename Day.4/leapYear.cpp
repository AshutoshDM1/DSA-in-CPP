//Question 2 : Write a C++ program that takes a year from the user and print whether 
// that year is a leap year or not.
#include<iostream>
using namespace std;

int main() {
  int year;
  cout << "Enter the year to check for leap year : \n" ;
  cin >> year;

  if(year % 4 == 0 ) {
    cout << "Its a leap Year \n";
  }
  else
  {
    cout << "Its Not a leap Year \n";
  }

  return 0;
};