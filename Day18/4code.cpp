#include<iostream>
using namespace std;

// polymorphism

// Function overiding Run time 
class Parent {
  public:
  void show(){
    cout << "Parent class\n"<<endl;
  };
  virtual void hello(){
    cout << "virtual Parent class\n"<<endl;
  };
};
class Child : public Parent {
  public:
  void show(){
    cout << "child class\n"<<endl;
  };
  void hello(){
    cout << "child class...hello \n"<<endl;
  };
};
 
int main() {
  Child c2;
  Parent *ptr;
  ptr = &c2;
  ptr->hello();
  return 0; 
}