#include<iostream>
using namespace std;

int tp(int n){
    if( n == 0 || n == 1){
        return 1;
    }

    // verical 
    int ans1 = tp(n-1);

    // horizontal
    int ans2 = tp(n-2);

    return ans1 + ans2 ;
}

int main() {
    cout<<"Tiling a rectangle of size 2xn with tiles 2x1 \n";
    int size = 0;
    cin >>size;
    cout << tp(size) <<"\n" ;
}
  