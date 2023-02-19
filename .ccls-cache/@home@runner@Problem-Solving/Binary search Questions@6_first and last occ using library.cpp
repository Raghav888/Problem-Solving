// https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/submissions/900732071/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
  vector<int> nums{5, 7, 7, 8, 8, 10};
  vector<int>::iterator low,up; 
  low=lower_bound(nums.begin(),nums.end(),8);
  up=upper_bound(nums.begin(),nums.end(),8);
  cout<<(low - nums.begin())<<" "<<(up- nums.begin());
  
  return 0;
}
