#include<iostream>
using namespace std;

void changeTheNum (int num) {
  int doNum = num;
  int finalNum = 0, power = 1;
  while (doNum > 0) {
    int lastdigit = doNum % 10;
    finalNum += lastdigit * power;
    power = power * 2 ;
    doNum = doNum/10;
  }
  cout << "The Final Value in Decimal :" << finalNum << endl;
}

int main () 
{
  int num = 0;
  cout << "Enter a Binary Number to Converte Into decimal \n";
  cin>>num;
  changeTheNum(num);
  return 0;
}
