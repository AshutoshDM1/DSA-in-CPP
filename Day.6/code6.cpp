// pattern : Hollow Ractangle
// * * * * *
// *       *
// *       *
// *       *
// *       *
// * * * * *

#include<iostream>
using namespace std;
int main(){

  int n=0;
  char star='*';
  cout << "Enter thhe rows you want in pattern \n";
  cin >> n;
  for (int i=0 ; i<n; i++){
    cout << " "<<star;
    for (int j=0 ; j<n; j++ ){
      if ( i == 0 || i == n-1){
        cout << " "<<star;
      }
      else {
        cout << " "<<" ";
      }
    } 
    cout << " "<<star;
    if(i== n-1){
      break;
    }
    cout<<endl;
  }
  return 0;
}