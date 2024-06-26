#include <iostream>
#include <cstring>
using namespace std;

int main() {
  char name[5] = "MoDx";
  cout << "String : " << name << endl;
  int start = 0;
  int end  = strlen(name) - 1;

  while(start <= end) {
    swap(name[start++], name[end--]);
  }
  cout << "String : " << name << endl;
  
  return 0;
}