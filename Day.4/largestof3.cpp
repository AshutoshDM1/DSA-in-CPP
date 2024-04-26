#include <iostream>
using namespace std;
int main () 
{
  //Code for Finding Largest of 3 in Number  :
  cout << "Enter Three Numbers : \n";
  int a , b , c ;
  cout << "Enter The First Number : \n";
  cin >> a ;
  cout << "Enter The Second Number : \n";
  cin >> b ;
  cout << "Enter The Third Number : \n";
  cin >> c ;
  
  if ( a > b && a > c) {
    cout << "The Greatest Number is :" << a <<"\n";
  }
  else if ( b > c) {
    cout << "The Greatest Number is :" << b <<"\n";
  }
  else {
    cout << "The Greatest Number is :" << c <<"\n";
  }
  return 0;

}