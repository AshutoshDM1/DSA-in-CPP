#include <iostream>
#include <vector>
using namespace std;

void print_vector(const vector<int>& numbers) {
    for (int num : numbers) {
        cout << num << " ";
    }
    cout << endl;
}

int main() {
    vector<vector<int>> vec1 = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    // Printing the vector by function
    for (const auto& vec : vec1) {
        print_vector(vec);
    }
    // Printing the vector
    for (int i =0 ; i < vec1.size() ; i++) {
      for (int j =0 ; j < vec1[i].size() ; j++) {
        cout << vec1[i][j] << " ";
      }
      cout << endl;
    }
    return 0;
}