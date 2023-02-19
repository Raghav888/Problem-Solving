#include <iostream>
#include <vector>

using namespace std;

int missingNumber(vector<int> &nums) {
  int sum = nums.size() * (nums.size() + 1) / 2;
  for (auto val : nums) {
    sum -= val;
  }
  return sum;
}

int main() {
  vector<int> array1{3, 0, 1};

  cout << missingNumber(array1);
  return 0;
}
