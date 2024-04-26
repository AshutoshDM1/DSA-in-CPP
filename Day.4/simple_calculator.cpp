#include<iostream>
using namespace std;
int main ()
{
  // Basic Calculator using Switch
  int choose;
  int a , b;
  int result ;

  cout << "Enter what you what to Perform In Calculator \n";
  cout <<  "Enter 1 For Doing Addition \n";
  cout <<  "Enter 2 For Doing Subtraction \n";
  cout <<  "Enter 3 For Doing Multiply \n";
  cout <<  "Enter 4 For Doing Division \n";
  cin >> choose;
  cout << "Enter The First Number : \n";
  cin >> a ;
  cout << "Enter The Second NUmber : \n";
  cin >> b ;

  switch (choose){
    case 1 : {
      result = a + b;
      cout << "Addition of : " <<a<<" and "<<b<<" is = "<<result<<"\n";
      break;
    }
    case 2 : {
      result = a - b;
      cout << "Subtraction of : " <<a<<" and "<<b<<" is = "<<result<<"\n";
      break;
    }
    case 3 : {
      result = a * b;
      cout << "Multiply of : " <<a<<" and "<<b<<" is = "<<result<<"\n";
      break;
    }
    case 4 : {
      result = a / b;
      cout << "Division of : " <<a<<" and "<<b<<" is = "<<result<<"\n";
      break;
    }

  }
  
 return 0;
}