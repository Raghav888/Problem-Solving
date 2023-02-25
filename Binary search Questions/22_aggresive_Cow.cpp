// https://practice.geeksforgeeks.org/problems/aggressive-cows/1

#include <algorithm>
#include <iostream>
#include <numeric>
#include <vector>
using namespace std;

int possibleSolution(vector<int> stalls, int k, int mid) {

  int count = 1;
  int pos = stalls[0];

  for (int i = 1; i < stalls.size(); i++) {

    if (stalls[i] - pos >= mid) {
      count++;
      pos = stalls[i];
    }

    if (count == k) {
      return true;
    }
  }
  return false;
}

int solve(int k, vector<int> &stalls) {

  sort(stalls.begin(), stalls.end());
  int start = 0;
  int end = stalls[stalls.size() - 1] -
            stalls[0]; // as here array contains the position of stall
  int ans = -1;
  int mid;

  while (start <= end) {
    mid = start + (end - start) / 2;

    if (possibleSolution(stalls, k, mid)) {
      ans = mid;
      start = mid + 1; // as we want to max the distance
    } else {
      end = mid - 1;
    }
  }

  return ans;
}

int main() {

  vector<int> arr{1, 2, 4, 8, 9};
  int m = 3;

  cout << solve(m, arr);
  return 0;
}