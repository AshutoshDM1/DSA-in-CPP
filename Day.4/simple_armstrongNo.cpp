/*
Question 5 : For any 3 digit number check whether it’s an Armstrong number or not. 
Armstrong number is a number that is equal to the sum of cubes of its digits.
Eg : 371 is an armstrong number. 
3*3*3 + 7*7*7 + 1*1*1 = 371
*/
#include<iostream>
using namespace std;
int main () {
  cout << "Please Enter a Three Digit Number : \n";
  int num , digit1 , digit2 , digit3 ,temp1 , finalNum;
  cin >> num;
  digit1 = num/100; 
  cout << "digit1 :" << digit1 ;
  temp1 = num%100;
  digit2 = temp1/10;
  cout << "\ndigit2 :" << digit2 ;
  digit3 = temp1%10;
  cout << "\ndigit3 :" << digit3 <<"\n" ;
  finalNum = digit1*digit1*digit1 + digit2*digit2*digit2 + digit3*digit3*digit3 ;
  if (num <= 999 && num >= 100) {
    if(finalNum == num) {
      cout << "It is a armstrong Number \n";
    }
    else {
      cout << "It is not a armstrong Number \n";
    }
  }
  else
  {
    cout << "Wrong Number \n";
  }
  return 0;
}