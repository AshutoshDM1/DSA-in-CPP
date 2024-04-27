#include<iostream>
using namespace std;
int main ()
{
  int num=0 , result = 0;
  cout<<"Enter the number to get reverse of It : \n";
  cin>>num; 
  while (num != 0) {
    int lastDigit = num % 10;
    result = result * 10 + lastDigit;
    num = num / 10;
  }
  cout<<"The reverse of the number is : " << result << "\n";
  return 0;

}