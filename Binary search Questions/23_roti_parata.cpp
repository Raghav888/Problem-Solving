// https://www.spoj.com/problems/PRATA/

#include <iostream>
#include <numeric>
#include <vector>

using namespace std;

bool possibleSolution(vector<int> arr, int m, int mid) {

  int count = 0;

  for (int i = 0; i < arr.size(); i++) {
    int sum = 0;
    int count_2 = 1;
    while ((sum + (arr[i] * count_2)) <= mid) {
      sum = sum + (arr[i] * count_2);
      count_2++;
      count++;
    }
  }

  if (count >= m) {
    return true;
  }
  return false;
}

int rotiSpoj(vector<int> arr, int m) {

  int start = 0;
  int end = 1e8;
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

  vector<int> arr{1, 1, 1, 1, 1, 1, 1, 1};
  int m = 8;

  cout << rotiSpoj(arr, m);
  return 0;
}
