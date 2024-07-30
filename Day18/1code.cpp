#include<iostream>
using namespace std;

// polymorphism

// Function overloading 
class Print {
  public:
  void show(int x) {
    cout << "Printing the int :" <<x<< endl;
  };
  void show(string x) {
    cout << "Printing the string :" <<x<< endl;
  };
};

int main() {
  Print p1;
  p1.show(10);
  p1.show("Hello World");
  return 0; 
}