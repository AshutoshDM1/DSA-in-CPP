#include<iostream>
using namespace std;

// Abstraction 

class Shape {  // Abstract Class
  public:
  virtual void draw()=0; // Abstract Function
  
};
class Circle : public Shape {
  public:
  void draw(){
    cout << "drawing a circle :"<<endl;
  };
};
class Square : public Shape {
  public:
  void draw(){
    cout << "drawing a Square :"<<endl;
  };
};
 
int main() {
  Circle c1; // Circle object created.
  c1.draw(); 

  Square s1; // Square Object Created.
  s1.draw();
  return 0; 
}