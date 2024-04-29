// Pattern : Half Pyramid
// *
// **
// ***
// ****
// *****



#include<iostream>
using namespace std;
int main()

{
  int n=0;
  cout<<"Enter the number of rows: ";
  cin>>n;
  char star= '*';
  for (int i = 0; i < n; i++){
    for (int j = 0; j <= i; j++)
    {
      cout << " " <<star;
    }
    if(i== n-1){
      break;
    }
    cout << "\n";
  }
  return 0;
}
