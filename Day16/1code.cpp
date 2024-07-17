// Bitwise Operators

#include <iostream>
using namespace std;
int main() {

    cout << "bit and :" << (5 & 3) << endl;
    cout << "bit or :" << (5 | 3) << endl;
    cout << "bit xor :" << (5 ^ 3) << endl;
    cout << "bit not :" << (~2) << endl;

    // binary shift oprators

    cout << "left shift :" << (4 << 2) << endl;
    // 4 * 2^2 = 16
    cout << "right shift :" << (4 >> 2) << endl;
    // 4 / 2^2 = 1
    return 0;
}

 