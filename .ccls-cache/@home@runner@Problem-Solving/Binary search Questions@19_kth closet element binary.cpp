
#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

vector<int> findClosestElements(vector<int> &arr, int k, int x) {
  vector<int>::iterator low1 = lower_bound(arr.begin(), arr.end(), x);

  int start = low1 - arr.begin() - 1;
  int end = low1 - arr.begin();

  while (k--) {
    if (start < 0) {
      end++;
    } else if (end >= arr.size()) {
      start--;
    }

    else if (arr[end] - x < x - arr[start]) {
      end++;
    } else {
      start--;
    }
  }

  return vector<int>(arr.begin() + start + 1, arr.begin() + end);
}

int main() {
  vector<int> arr{1, 2, 3, 4, 5};
  vector<int> ans = findClosestElements(arr, 4, 3);

  for (auto val : ans) {
    cout << val << " ";
  }

  return 0;
}
