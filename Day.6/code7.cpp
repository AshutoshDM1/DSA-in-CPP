// Pattern : Half Pyramid Rotated
//     *
//    **
//   ***
//  ****
// *****

#include<iostream>
using namespace std;
int main()
{
  int n=0;
  cout<<"Enter the number of rows: ";
  cin>>n;
  char star= '*';
  for (int i = 0; i <= n; i++){
    for (int j = 0; j < n - i; j++)
    {
      cout << " " << " ";
    }
    for (int g=0 ; g <= i; g++){
      cout << " " <<star;
    }
    cout << "\n";
  }
  return 0;
}
