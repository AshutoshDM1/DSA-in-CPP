#include<iostream>
#include<math.h>
using namespace std;

void changeTheNum (int decnum) {
  int doNum = decnum;
  int power = 1;
  int finalNum = 0;
  
  while (doNum > 0) {
    int lastdigit = doNum % 2;
    finalNum += lastdigit * power;
    doNum = doNum/2;
    power = power * 10 ;
  }
  cout << "The Final Value in Binary :" << finalNum << endl;
}

int main () 
{
  int decnum = 0;
  cout << "Enter a Binary Number to Converte Into decimal \n";
  cin>>decnum;
  changeTheNum(decnum);
  return 0;
}
 