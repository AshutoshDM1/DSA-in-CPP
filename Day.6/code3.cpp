// Pattern : Reverse Half Pyramid
// *****
// ****
// ***
// **
// *



#include<iostream>
using namespace std;
int main()
{
  int n=0 , m=0;
  cout<<"Enter the number of rows: ";
  cin>>n;
  m = n;
  char star= '*';
  for (int i = 0; i < n; i++){
    for (int j = 0; j < m; j++)
    {
      cout << " " <<star;
    }
    if(i== n-1){
      break;
    }
    cout << "\n";
    m--;
  }
  return 0;
}

//Solution by Apna College

// #include<iostream>
// using namespace std;
// int main()
// {
//   int n=0 , m=0;
//   cout<<"Enter the number of rows: ";
//   cin>>n;
//   m = n;
//   char star= '*';
//   for (int i = 0; i < n; i++){
//     for (int j = 0; j < n - i ; j++)
//     {
//       cout << " " <<star;
//     }
//     if(i== n-1){
//       break;
//     }
//     cout << "\n";
//     m--;
//   }
//   return 0;
// }