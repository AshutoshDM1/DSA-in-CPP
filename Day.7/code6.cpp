#include<iostream>
using namespace std;

int fact(int a) {
  int fact = 1;
  for (int i = 1 ; i <= a ; i ++) {
    fact = fact * i;
  }
  return fact;
}
int main() {
  int n=0 , r=0;
	cout << "Enter the Number of choises for binomial coefficient:" << endl;
  cin >> n ;
	cout << "Enter the Number of chosing from choises :" << endl;
  cin >> r ;
  int factn = fact(n);
  int factr = fact(r);
  int factnr = fact(n-r);
  cout << "Value of N : "<<factn<<endl;
  cout << "Value of R : "<<factr<<endl;
  cout << "Value of N-R : "<<factnr<<endl;

  int finalAns = factn/(factr*factnr);
  cout << "The Final Answer nCr is : "<<finalAns<<endl;
  return 0;
}

