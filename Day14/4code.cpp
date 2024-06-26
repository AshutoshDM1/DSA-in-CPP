#include <iostream>
#include <cstring>
using namespace std;

int main() {
  char name[] = "MoDx";
  cout << "String : " << name << endl;
  
  for (int i = 0; i < strlen(name); ++i) {
    if (name[i] >= 'a' && name[i] <= 'z') {
      name[i] = name[i] - 'a' + 'A'; 
    }
  }
  
  cout << "String : " << name << endl;

  return 0;
}

