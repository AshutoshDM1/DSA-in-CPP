#include <iostream>
using namespace std;

// Brute Force  Sorting
// Description: This program is used to sort an array of
void BruteSorting(int arr[4][4] , int n , int m ,int key) {
  for (int i = 0 ; i < n ; i++ ){
    for (int j = 0 ; j < m ; j++ ){
      if(arr[i][j] == key){
        cout << "The element at index " <<i<<""<<j<< endl;
      }
    }  
  }
}

// Binary Search
// Description: This program is used to search an element in a array of 2D.

void BinarySearch(int arr[4][4] , int n , int m ,int key) {
  int row = 0 , col = m - 1;
  while (row < n && col >= 0) {
    if (key == arr[row][col]){
      cout << "The element at index " <<row<<""<<col<< endl;
      return ;
    }
    if (key < arr[row][col]) {
      col--;
    } 
    else {
      row++;
    } 
  }
  cout << "The element is not found" <<  endl;
}

void staircasesearch(int arr[4][4] , int n , int m ,int key) {
  int row = 0 , col = m-1; 
  while ( row < n && col >= 0){
    if (key == arr[row][col]){
      cout << "The element at index " << row << "" << col << endl;
    }
    if (key > arr[row][col]){
      row++;
    }
    else {
      col--;
    }
  }
}

int main() {
  int arr[4][4] = {
    {10 , 20 , 30 , 40},
    {15 , 25 , 35 , 45},
    {27 , 29 , 37 , 48},
    {32 , 33 , 39 , 50}
  };

  int key = 50;
  int n = 4 , m = 4;
  // BruteSorting(arr , n , m , key);
  // BinarySearch(arr 	, n 	, m 	, key);
  staircasesearch(arr , n , m , key);
  return 0;
}
