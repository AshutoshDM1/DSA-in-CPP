// Pattern : gibris
//  *   *   *   *   *   *   *
//    *   *   *   *   *   *
//  *   *   *   *   *   *   *
//    *   *   *   *   *   *
//  *   *   *   *   *   *   *
//    *   *   *   *   *   *
//  *   *   *   *   *   *   *
//    *   *   *   *   *   *
//  *   *   *   *   *   *   *
//    *   *   *   *   *   *
//  *   *   *   *   *   *   *
//    *   *   *   *   *   *

#include<iostream>
using namespace std;
int main()
{
  int n=0;
  int m=0;
  cout<<"Enter the number of rows: ";
  cin>>n;
  m = n;
  char star= '*';
  for (int i = 0; i < n; i++){
    for (int j = 0; j <= n; j++)
    {
      m = j - i;
      if (m % 2 == 0){
        cout << " " <<star;
      }
      else {
        cout << " " <<" ";
      }
      m=0;
    }
    if(i== n-1){
      break;
    }
    cout << "\n";
  }
  return 0;
}
