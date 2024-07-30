#include<iostream>
using namespace std;

// polymorphism

// Function overiding Compile Time 
class Parent {
  public:
  void show(){
    cout << "Parent class\n"<<endl;
  };
};
class Child : public Parent {
  public:
  void show(){
    cout << "child class\n"<<endl;
  };
};
 
int main() {
  Parent c1;
  Child c2;
  c1.show();
  c2.show();
  return 0; 
}