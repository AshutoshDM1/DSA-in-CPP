#include<iostream>
using namespace std;

// Spiral Matrix 
// Solved by self this is my code

void output(int arr[5][5], int n, int m) {
    cout << "The elements of the array are: " << endl;
		int srow = 0;
		int scol = 0;
		int erow = n - 1;
		int ecol = m - 1;
		
  	for (int i = srow ; i <= srow ; i++) {
			for (int j = scol; j <= ecol; j++ )
      cout << arr[i][j] << " ";
  }

  	for (int i = srow+1 ; i <= erow ; i++) {
			for (int j = ecol; j <= ecol; j++ ){
      cout << arr[i][j] << " ";
		}
  }
  	for (int i = ecol ; i <= ecol ; i++) {
			for (int j = ecol-1; j >= scol; j-- ){
      cout << arr[i][j] << " ";
		}
  }
  	for (int i = ecol-1 ; i >= scol+1 ; i--) {
			for (int j = scol; j <= scol; j++ ){
      cout << arr[i][j] << " ";
		}
  }
  	for (int i = scol+1 ; i <= scol+1 ; i++) {
			for (int j = scol+1 ; j <= ecol-1 ; j++ ){
      cout << arr[i][j] << " ";
		}
  }
  	for (int i = srow+2 ; i <= srow+2 ; i++) {
			for (int j = ecol-1 ; j >= scol+1 ; j-- ){
      cout << arr[i][j] << " ";
		}
  }
	srow++; scol++; erow--; ecol--; // This is taken by apna collage.
}

int main()
{
	int arr [4][4] =
	{
		{ 1, 2, 3, 4 },
		{ 5, 6, 7, 8},
		{ 9, 10, 11, 12},
		{ 13, 14, 15, 16}
	};
	int arr2 [5][5] =
	{
		{1, 2, 3, 4, 5},
		{6, 7, 8, 9, 10},
		{11, 12, 13, 14, 15},
		{16, 17, 18, 19, 20},
		{21, 22, 23, 24, 25}
	};
	
	// output(arr , 4  , 4);
	output(arr2 , 5  , 5);
	return 0;
}