#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

int findDuplicate(vector<int> &nums) {

  unordered_map<int, int> hash;

  for (int i = 0; i < nums.size(); i++) {
    hash[nums[i]]++;
  }

  for (int i = 0; i < nums.size(); i++) {

    if (hash[nums[i]] > 1) {
      return nums[i];
    }
  }
  return 0;
}

int main() {

  vector<int> arr{1, 2, 3, 3};

  int dupliacte = findDuplicate(arr);
  cout << dupliacte;
  return 0;
}
