#include<iostream>
using namespace std;
int main() {

  do {
    int num ;
    cout<<"Enter a number : ";
    cin>>num;
    if (num == 10){
      continue;
    }
    if(num % 10 == 0){
      break;
    }
    cout << "Your is not divisible by 10."<< endl;

  }
  while(true);
  cout << "Now we are going to break out of the loop."<< endl;
  return 0;
}