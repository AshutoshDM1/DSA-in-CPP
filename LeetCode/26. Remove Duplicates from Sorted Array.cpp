#include<iostream>
#include<vector>

using namespace std;


int show(vector<int>&nums){
    cout << "{";
  for (int i = 0; i < nums.size(); i++) {
    cout<<nums[i] <<" , " ;
  }
    cout << "}\n";
}


class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
    if (nums.size() == 0) return 0;
      int k = 1;
      for(int i = 1; i < nums.size(); i++){
        if (nums[i] != nums[i-1] ){
          nums[k] = nums[i];
          k++;
        }
      }
      show(nums);
      return k;
    }
};


int main() {
  cout << "Remove Duplicates From Array\n";
  vector<int> nums1 = {0,0,1,1,1,2,2};
  Solution solution;
  int Items1 = solution.removeDuplicates(nums1);
  cout << "Size of Array :" << nums1.size() << "\n";
  cout << "Duplicate Items :" << Items1 << "\n";


  return 0;
}