#include <iostream>
using namespace std;
int main()
{
  int marks;
  cout << "Enter the Marks : \n" ;
  cin >> marks ;
  if (marks >= 90 ) {
    cout << "A Grade\n";
  }
  else if (marks >= 75 )
  {
    cout << "B Grade \n" ;
  }
  else if (marks >= 60 )
  {
    cout << "C Grade \n" ;
  }
  else if (marks >= 50 )
  {
    cout << "D Grade \n" ;
  }
  else
  {
    cout << "E Grade \n" ;
  }
  return 0 ;
}