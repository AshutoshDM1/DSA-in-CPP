#include<iostream>
using namespace std;

// Single Level Inheritance

class Animal {
    public:
    string color;
    void eat() {
        cout << "Eating..." << endl;
    };
    void breath() {
        cout << "breathing..." << endl;
    };
};
class Fish : public Animal {
    public:
    int fins;
    void swim() {
        cout << "swiming..." << endl;
    };
};

// Hierarchy Inheritance
class Dog : public Animal {  
    public:
    void woff(){
        cout << "woofing..." << endl;
    };
};

int main() {
    cout << "Hello World!" << endl;
}

