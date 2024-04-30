// Pattern : Butterfly 
//  *                     *
//  * *                 * *
//  * * *             * * *
//  * * * *         * * * *
//  * * * * *     * * * * *
//  * * * * * * * * * * * *
//  * * * * * * * * * * * *
//  * * * * *     * * * * *
//  * * * *         * * * *
//  * * *             * * *
//  * *                 * *
//  *                     *


#include<iostream>
using namespace std;
int main(){

  int n=0;
  char star='*';
  cout << "Enter thhe rows you want in pattern \n";
  cin >> n;
  for (int i=0 ; i<=n; i++){
    for (int k=0 ; k<=i; k++) {
      cout << " "<<star;
    }
    for (int j=0 ; j<2*(n-i); j++ ){
      cout << " "<<" ";
    } 
    for (int k=0 ; k<=i; k++) {
      cout << " "<<star;
    }
    cout<<endl;
  }
  for (int i=n ; i>=0; i--){
    for (int k=0 ; k<=i; k++) {
      cout << " "<<star;
    }
    for (int j=0 ; j<2*(n-i); j++ ){
      cout << " "<<" ";
    } 
    for (int k=0 ; k<=i; k++) {
      cout << " "<<star;
    }
    cout<<endl;
  }
  return 0;
}