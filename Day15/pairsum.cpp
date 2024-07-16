#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
  vector<int> twoSum(vector<int>& numbers, int target) {
    int str = 0;
    int end = numbers.size() - 1;
        
    while (str < end) {
    int sum = numbers[str] + numbers[end];
            
    if (sum == target) {
      cout << "Pair sum is: " << numbers[str] << " " << numbers[end] << endl;
      return {numbers[str], numbers[end]};
    } 
    else if (sum > target) {
      end--;
      }
    else {
      str++;
      }
    }
  }
};

int main() {
  Solution solution;
  vector<int> numbers = {2, 7, 11, 15};
  int target = 9;
    
  vector<int> result = solution.twoSum(numbers, target);

  return 0;
}
