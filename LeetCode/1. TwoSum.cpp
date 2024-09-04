#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        for(int i = 0 ; i <nums.size() ;  i++){
            for(int j = i+1 ; j <nums.size() ;  j++){
                if (nums[i] + nums [j] == target ) {
                    return {nums[i] , nums [j]};
          }
      }
    }
  }

};

int main() {
	Solution solution;
	vector<int> nums = {3,2,4};
	int target = 6;
	vector<int> result = solution.twoSum(nums, target);
	
	if (result.size() == 2 && result[0] + result[1] == target) {
		cout << "Test case passed: Found numbers " << result[0] << " and " << result[1] << " that sum to " << target << endl;
	} else {
		cout << "Test case failed: Expected sum of " << target << ", but got ";
		if (result.size() == 2) {
			cout << result[0] << " + " << result[1] << " = " << (result[0] + result[1]);
		} else {
			cout << "invalid result";
		}
		cout << endl;
	}
	cout << "Hello World!" << endl;
}