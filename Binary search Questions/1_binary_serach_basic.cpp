#include <iostream>
#include <vector>
using namespace std;

int search(vector<int> &nums, int target) {
  int start = 0;
  int end = nums.size() - 1;
  int mid = start + (end - start) / 2;

  while (start <= end) {

    if (nums[mid] == target) {
      return mid;
    } else if (nums[mid] < target) {
      start = mid + 1;
    } else {
      end = mid - 1;
    }
    mid = start + (end - start) / 2;
  }
  return -1;
}

int main() {
  vector<int> nums{-1, 0, 3, 5, 9, 12};
  int ans = search(nums, 3);
  cout << ans;
  return 0;
}