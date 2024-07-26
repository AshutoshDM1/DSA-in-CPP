#include<iostream>
#include<string>
using namespace std;

// learning about contructor and destructor of a class in C++

class Student {

  private:
  float cgpa;
  string name;

  public:
  Student () {   // Contructor is same name as class
    cout << "New Student is Created :"<<endl;
    this->name = "Ashutosh";
    this->cgpa = 123.3f;
  }
  Student (string name, float cgpa) {   // Contructor overloader function in C++
    cout << "New Student is Created :"<<endl;
    this->name = name;
    this->cgpa = cgpa;
  }
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
  s1.getName();
  s1.getPercentage ();
  Student s2 ("MoDx", 456.3f);
  s2.getName();
  s2.getPercentage ();
  return 0;
}



