#include<iostream>
using namespace std;

// Static Function in classes 

int num() {

  static int count = 0; // new variable will not create 
  count++;
  return count;
}

class Hello {
  public:
  void hello(){
    cout << "virtual Parent class\n"<<endl;
  };
};

int main() {


  cout << "Number declered static "<< endl; 
  cout <<"count :" << num() << endl ;
  cout <<"count :" << num() << endl ;
  cout <<"count :" << num() << endl ; 
  
  Hello obj1;
  obj1.hello(); 

  return 0; 
}  