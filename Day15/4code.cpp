#include <iostream>
#include <vector>
using namespace std;

int main() {
  vector<int> vec1 = { 1, 2, 3 };
  cout << vec1.size() << endl;
  for ( int i : vec1 ) {
     cout  << i << " " ; 
  }
  return 0;
}