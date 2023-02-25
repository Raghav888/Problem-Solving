// https://www.geeksforgeeks.org/painters-partition-problem/

#include <iostream>
#include <numeric>
#include <vector>

using namespace std;

bool possibleSolution(vector<int> arr, int m, int mid) {

  int pageSum = 0;
  int count = 1;

  for (int i = 0; i < arr.size(); i++) {

    if (arr[i] > mid) {
      return false;
    }

    if (pageSum + arr[i] > mid) {

      pageSum = arr[i];
      count++;
      if (count > m) {
        return false;
      }
    }

    else {
      pageSum += arr[i];
    }
  }

  return true;
}

int bookAllocation(vector<int> arr, int m) {

  if (arr.size() < m) {
    return -1;
  }

  int start = 0;
  int end = accumulate(arr.begin(), arr.end(), 0);
  int mid;
  int ans = -1;

  while (start <= end) {
    mid = start + (end - start) / 2;

    if (possibleSolution(arr, m, mid)) {
      ans = mid;
      end = mid - 1;
    } else {
      start = mid + 1;
    }
  }

  return ans;
}

int main() {

  vector<int> arr{10, 10, 10, 10};
  int m = 2;

  cout << bookAllocation(arr, m);
  return 0;
}
