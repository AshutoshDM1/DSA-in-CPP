#include <iostream>
#include<string>
#include<vector>
using namespace std;

void printArr (int arr[] , int n ) {
    cout << "[";
    for ( int i = 0 ; i < n ; ++i ) {
        cout << arr[i] << ",";
    }
    cout << "]\n";
}

void changeArr ( int *arr , int n , int i ) {
    if (i >= n) {
        cout << "Recursive Array is : ";
        printArr (arr , n );
        return ;
    }
    arr[i] = i+1;
    changeArr ( arr , n , i+1);
    arr[i] -= 2;
}

int main() {
    cout << "BackTracking on Array " << endl;
    int arr[5] = {0};
    int n = 5;
    cout << "Initial Array is : ";
    printArr(arr ,n);
    changeArr(arr, n  ,0);
    cout << "BackTracked Array is : ";
    printArr(arr ,n);
    return 0;
}