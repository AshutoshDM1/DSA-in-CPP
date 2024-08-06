#include <iostream>
using namespace std;

void showPlus(int start, int end) {
    if (0 > end) {
        return;
    }
    cout << "Count is: " << start << endl;
    showPlus(start + 1, end);  
}
void showMinus(int count) {
    if (count == 0) {
        return; // Base case
    }
    cout << "Count is: " << count << endl;
    // this is what the function will do 
    showMinus(count - 1); // recursive function call
}
int main() {
  int count = 0;
  cout << "Enter the value of Count I Will Print it :  " << endl;
  cin >> count;
  showPlus(1 ,count);
  cout << "----------------------" << endl;
  showMinus(count);
  return 0;
}
