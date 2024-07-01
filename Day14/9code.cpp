#include<iostream>
#include<string>

using namespace std;
int main()
{
  string str = "Hello Bro !";

  cout << str.length() << endl;
  cout << str.at(0) << endl;
  cout << str.substr(1, 5) << endl;
  cout << str.find("Bro") << endl;

  return 0;
}
