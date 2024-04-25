#include <iostream>
using namespace std;
int main()
{
  int a;
  cin  >> a;
  if (!(a & 1)) {
    cout << "Even";
  }
  else {
    cout << "Odd";
  }
  return 0;
}

