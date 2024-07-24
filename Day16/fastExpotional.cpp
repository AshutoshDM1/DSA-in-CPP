#include<iostream>
using namespace std;

void fastExpo(int x , int n){
  int ans = 1;
  while(n > 0){
    int lastbit = n & 1;
    if (lastbit){
      ans = ans * x;
    }
    x = x * x;
    n= n >> 1;
  }
  cout << ans << endl;
}

int main() {
  cout << "The Enter a number : \n" ;
	int num = 0;
  cin >> num;
  cout << "The Enter power : \n" ;
	int n = 0;
  cin >> n;
  fastExpo(num , n);
  return 0 ;
}