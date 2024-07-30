#include<iostream>
using namespace std;

// Polymorphism - Operator Overloading
class Complex {
public:
    int real;
    int imag;
    Complex(int r, int i){
      real = r;
      imag = i;
    }
    void show() {
        cout << real << "+" << imag << "i" << endl;
    }

    // Overloading + operator to add two Complex objects
    Complex operator + (const Complex &c2) {
        int resReal = this->real + c2.real;
        int resImag = this->imag + c2.imag;
        return Complex(resReal, resImag);
    }
};

int main() {
    Complex c1(10, 5);
    Complex c2(12, 4);
    c1.show();
    c2.show();
    Complex c3 = c1 + c2;
    c3.show();
    return 0; 
}
