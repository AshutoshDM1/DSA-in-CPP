#include<iostream>
#include<string>
using namespace std;

// Multiple inheritance

class Teacher {
    public:
    int salary;
    string subject;
};
class Student {
    public: 
    int rollno;
    int cgpa;
};
class TA : public Teacher, public Student {
    public:
    string name;
};  

int main() {
    TA ta1;
    ta1.name = "Aswin";
    ta1.cgpa = 89;
    ta1.salary =  120000 ;

    cout << "Hello World!" << endl;
}

