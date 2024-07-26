#include<iostream>
#include<string>
using namespace std;

// learning about class in C++
// private and public 
// getter and setter 

class Student {

  private:
  float cgpa;
  string name;

  public:
  // setter function
  void setName(string getname){
    name = getname;
  }
  void setCgpa(float getcpga){
    cgpa = getcpga;
  }

  // getter function
    void getName(){
    cout  << "Name: " << name << endl;
  }
    void getPercentage () {   // member function 
    cout<<"CGPA: "<<cgpa<<endl;
  }

};

int main () {
  Student s1;
  // s1.name = "MoDx";
  // s1.cgpa = 3.5f; // cant access private section
  s1.setName("MoDx"); // setter function call
  s1.setCgpa(3.5f);
  s1.getName(); // getter function call
  s1.getPercentage ();
  cout << "Size of Class Studend :" << sizeof(s1) << endl;
  return 0;
}

