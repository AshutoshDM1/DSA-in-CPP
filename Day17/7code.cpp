#include<iostream>
using namespace std;

// Single Level Inheritance

class Livingbeings {
    public:
    void eat() {
        cout << "Eating..." << endl;
    };
    void breath() {
        cout << "breathing..." << endl;
    };

};

class Animal : public Livingbeings{
    public:
    string color;
    void sleep() {
        cout << "Sleeping..." << endl;
    }
};
class Fish : public Animal {
    public:
    int fins;
    void swim() {
        cout << "swiming..." << endl;
    };
};

int main() {
    Fish fish1;
    fish1.eat();
    fish1.breath();
    fish1.sleep();
    fish1.swim();
    cout << "Hello World!" << endl;
}

