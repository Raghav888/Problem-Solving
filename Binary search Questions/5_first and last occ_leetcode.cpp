// https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/submissions/900732071/

#include <iostream>
#include <vector>
using namespace std;

void first_and_last_occurence(vector<int> &nums, int target) {

  int start = 0;
  int end = nums.size() - 1;
  int mid = start + (end - start) / 2;
  vector<int> ans;
  int temp = -1;

  while (start <= end) {

    if (nums[mid] == target) {
      temp = mid;
      end = mid - 1;
    } else if (nums[mid] < target) {
      start = mid + 1;
    } else {
      end = mid - 1;
    }
    mid = start + (end - start) / 2;
  }
  ans.push_back(temp);

  start = 0;
  end = nums.size() - 1;
  mid = start + (end - start) / 2;

  while (start <= end) {

    if (nums[mid] == target) {
      temp = mid;
      start = mid + 1;
    } else if (nums[mid] < target) {
      start = mid + 1;
    } else {
      end = mid - 1;
    }
    mid = start + (end - start) / 2;
  }
  ans.push_back(temp);

  for (auto val : ans) {
    cout << val << " ";
  }
}

int main() {
  vector<int> nums{5, 7, 7, 8, 8, 10};
  first_and_last_occurence(nums, 6);
  return 0;
}
