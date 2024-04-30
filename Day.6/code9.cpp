// Pattern : floed Pyramid
// 1
// 23
// 456
// 78910

#include<iostream>
using namespace std;
int main()
{
  int n=0 ,m=0;

  cout<<"Enter the number of rows: ";
  cin>>n;
  for (int i = 0; i < n; i++){
    for (int j = 1; j <= i+1; j++)
    {
      cout << " " <<m;
      m++;
    }
    if(i== n-1){
      break;
    }
    cout << "\n";
  }
  return 0;
}
