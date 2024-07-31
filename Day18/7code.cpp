#include<iostream>
using namespace std;

// Friend Function

class A {
  string name  = "MoDx";
  friend class B;
  friend void showName(A &obj);
};

// Friend Class
class B {  
  public:
    void showName(A &obj){
      cout << "My Name is :" << obj.name <<endl;
  };
};

// Friend  Function
void showName(A &obj){
  cout << "My Name is :" << obj.name<<endl;
};


int main() {
  A N1;
  B N2;
  N2.showName(N1);
  showName(N1);
  return 0; 
}  