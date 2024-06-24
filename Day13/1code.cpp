#include <iostream>
using namespace std;

// Function to handle a 2D array passed as a 2D array
void function(int arr[][3], int i, int j) {
    cout << arr[i][j] << endl;
    cout << *(*(arr + i) + j) << endl;
}

// Function to handle a 2D array passed as a pointer
void function2(int (*arr)[3], int i, int j) {
    cout << arr[i][j] << endl;
    cout << *(*(arr + i) + j) << endl;
}

// Pointer in 2D

int main() {
    int mat[3][3] = {
        {1, 2, 3},  // The pointer arr points to the first element of each row...
        {4, 5, 6},
        {7, 8, 9}
    };

    cout << "mat : " << mat << endl;
    cout << "mat + 1 : " << mat + 1 << endl; // +1 in terms of rows
    cout << "mat + 2 : " << mat + 2 << endl; // +1 in terms of rows

    function(mat, 1, 2); // function call for the pointer arr...
    function2(mat, 1, 2); // function call for the pointer arr...

    return 0;
}
