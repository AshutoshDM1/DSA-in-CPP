#include <iostream>
#include <vector>
using namespace std;

void check_vector_size() {
  vector<int> vec2= { 1, 2, 3 };

  cout << "vector size:" << vec2.size() << endl;
  cout  << "capacity of vector:" << vec2.capacity() << endl;

  vec2.push_back(4);
  cout << "vector size:" << vec2.size() << endl;
  cout  << "capacity of vector:" << vec2.capacity() << endl;
}

int main() {
  vector<int> vec1 = { 1, 2, 3 };
  cout << vec1.size() << endl;
  for ( int i : vec1 ) {
     cout  << i << " " ; 
  }
  check_vector_size();
  return 0;
}

