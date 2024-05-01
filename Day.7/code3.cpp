#include<iostream>
using namespace std;

int multiple(int a , int b) {
  return a * b ;
}

int find (int a) {
  if (a % 2 == 0) {
    cout << "The number is even." << endl ;
  }
  else {
    cout << "The number is odd." <<endl ;
  }
}
int main() {
	cout << "Enter two Number for multiply :" << endl;
  int a,b ;
  cin >> a >> b ;
  cout << multiple(a , b ) << endl ;

  cout << "Enter any number to find it even or odd:" << endl;
  int c ;
  cin >> c ;
  find (c) ;
  return 0;
}

