#include <iostream>
#include <string>

using namespace std;

int main() {
  string str1;
  string str2;
  str2 = "Hello World!";
  // cout << "Enter the string: ";
  // getline(cin, str1, '*');
  
  // cout << "The entered string is: " << str1 << str2 << endl;
  cout << "normal for loop  :";
  for( int i = 0 ; i < str2.length() ; i++) {
    cout <<  str2[i] << ',';
  }
  cout << endl;
  cout << "using for each loop  :";
  for (char ch : str2) {
    cout <<  ch << ',';
  }  

  return 0;
} 