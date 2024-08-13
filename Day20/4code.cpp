#include<iostream>
using namespace std;

void BinaryString (int n , int lastplace , string string){
  if (n == 0) {
    cout << string << endl;
    return ;
  }
  if (lastplace != 1){
    BinaryString(n-1 , 0 , string + '0');
    BinaryString(n-1 , 1 , string + '1');
  }
  else{
    BinaryString(n-1 , 0 , string + '0');
  }

};

int main () {
  cout << "BinaryString Problem" << endl;
  int n =0;
  cout << "Enter the N :" << endl; 
  cin  >> n;
  BinaryString(n , 0 , "");
  return 0;
}