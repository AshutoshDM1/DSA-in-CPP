#include<iostream>
#include <climits> 
using namespace std;

// Trapping Rainwater
void trap(int *height, int n){
  int leftmax[20000];
  leftmax[0] = height[0];
  int rightmax[20000];
  rightmax[n-1] = height[n-1];
  
  for (int i = 1; i < n; i++){
    leftmax[i] = max(leftmax[i-1], height[i-1]);
  }
  for (int i = n-2; i >= 0; i--){
    rightmax[i] = max(rightmax[i+1], height[i+1]);
  }

 int water = 0;
 for(int i = 0; i < n; i++) {
  int curWater = min(leftmax[i], rightmax[i]) - height[i];
  if (curWater > 0){
    water += curWater;
  }
 }
 cout << "My water Trapped = " << water << endl;
}
 
int main()
{
  int height[7] = {4,2,0,6,3,2,5};
  int n = sizeof(height)/sizeof(int);
  trap(height, n);
  return 0;
}
