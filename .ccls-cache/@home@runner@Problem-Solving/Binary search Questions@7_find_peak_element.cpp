// https://leetcode.com/problems/find-peak-element/description/
#include <iostream>
#include <vector>
using namespace std;

int findPeak(vector<int> &nums) {

  int start = 0;
  int end = nums.size() - 1;
  int mid = start + (end - start) / 2;
  int temp=end;

while (start < end) {
  if (nums[mid] < nums[mid+1]) {
    start=mid+1;
    } else {
      temp=mid;
      end=mid;
    }
    mid = start + (end - start) / 2;
  }
  return temp;
    }

}

int main() {
  vector<int> nums{6, 5, 4, 3, 2, 3, 2};
  int ans = findPeak(nums);
  cout << ans;
  return 0;
}
