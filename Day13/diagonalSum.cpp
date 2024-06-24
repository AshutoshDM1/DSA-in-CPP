#include<iostream>
using namespace std;


void diagonalSum (int arr [4][4] , int n , int m) {
	cout << "Primary diagonals are :" << endl;
	int diSum = 0;
	for (int  i = 0; i < n; ++i) {
		for (int j = 0; j < m; ++j) {
			if ( i == j ) {
				cout << arr [i][j] << " ";
				diSum += arr [i][j];
		  }
			else if (j == n - i - 1)
			{
				cout << arr [i][j] << " ";
				diSum += arr [i][j];
			}
		}
	}
	cout << "The sum of the primary diagonals is :";
	cout << diSum << endl;
}

int main()
{
	int arr [4][4] = {
		{1,2,3,4},
		{5,6,7,8},
		{9,10,11,12},
		{13,14,15,16}
	};
	diagonalSum (arr , 4 , 4);
	return 0;
}