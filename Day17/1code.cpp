#include<iostream>
#include<string>
using namespace std;

class Student {
  string name;
  float cgpa;
  void getPercentage () {
    cout<<"CGPA: "<<cgpa<<endl;
  }
};

int main () {
  Student student;
  return 0;
}

