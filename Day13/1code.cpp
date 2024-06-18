#include<iostream>
using namespace std;

void input(int arr[2][3], int n, int m) {
    cout << "Enter the elements of the array: " << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> arr[i][j];
        }
    }
}

void output(int arr[2][3], int n, int m) {
    cout << "The elements of the array are: " << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{
	// int stu1 [2][3] = {{ 1, 2, 3 },{ 4, 5, 6 }};
	int stu2 [2][3] = 
	{
		{ 1, 2, 3 },
		{ 4, 5, 6 }
	};  // IT can be written in this way like a matrix.
	int stu3 [2][3];
	input(stu3 , 2 , 3);
	output(stu3 , 2 , 3);
}