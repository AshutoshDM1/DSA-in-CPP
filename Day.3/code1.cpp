// Const Variables 
#include<iostream>
using namespace std;
int main() {
	const int num1 = 10; // const declaration and its should be assigned to a value.
    int num2;
    num2 = 20;
    // num1 = 30; // this cant be done as it is const.
    num2 = 40; // but normal variable can be changed.
    return 0;
}

// in c++ const variables takes space in memory and its not changeable.


/*  but the macros which are defind by
#define MACRO_NAME 1
are not stored in memory as they are just a text string, but it is still considered to be constant. */ 

// when const are used there values get fetch from 
// but in case of macro they get replaced with their value at runtime

