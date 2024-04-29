// A
// B C
// D E F
// G H I J

#include<iostream>
using namespace std;
int main()
{
  char ch='A';
  int n=0;
  cout<<"Enter the number of rows: ";
  cin>>n;
  for (int i = 0; i < n; i++){
    for (int j = 0; j <= i; j++)
    {
      cout << " " <<ch;
      ch++;
    }
    if(i== n-1){
      break;
    }
    cout << "\n";
  }
  return 0;
}
