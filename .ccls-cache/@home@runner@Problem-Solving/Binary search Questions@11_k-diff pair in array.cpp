// https://leetcode.com/problems/k-diff-pairs-in-an-array/submissions/903268147/

#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int findPairs(vector<int> &nums, int k) {
  int count = 0;
  sort(nums.begin(), nums.end());
  for (int i = 0; i < nums.size(); i++) {

    if (i > 0 && nums[i] == nums[i - 1]) {
      continue;
    }
    if (binary_search(nums.begin() + 1 + i, nums.end(), nums[i] + k)) {
      count++;
    }
  }
  return count;
}

int main() {
  vector<int> nums{3, 1, 2, 4, 5};
  cout << findPairs(nums, 3);
  return 0;
}