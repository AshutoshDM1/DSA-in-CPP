#include<iostream>
using namespace std;
int main() {
  int num=0 , sum=0 ,sum2=0;
  cout << "Enter a num to get sum of it : \n"   ;
  cin >> num;

  while (num != 0) {
    int lastDigit = num % 10;
    sum = sum + lastDigit;
    if (lastDigit % 2 != 0) {
      sum2 = sum2 + lastDigit;
    }
    num = num / 10;
  }
  cout << "Sum of all digit is : " ;
  cout << sum << endl;
  cout << "Sum of Its Odd digit is : " ;
  cout << sum2 << endl;
  return 0;
}