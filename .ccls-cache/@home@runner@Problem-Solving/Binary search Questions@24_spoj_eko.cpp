
#include <iostream>
#include <numeric>
#include <vector>

using namespace std;

bool possibleSolution(vector<int> arr, int m, int mid) {

  int sum = 0;
  int temp;
  for (int i = 0; i < arr.size(); i++) {
    temp = arr[i] - mid;
    sum += temp >= 0 ? temp : 0;
  }

  if (sum >= m) {
    return true;
  }
  return false;
}

int spojEko(vector<int> arr, int m) {

  int start = m;
  int end = accumulate(arr.begin(), arr.end(), 0);
  int mid;
  int ans = -1;

  while (start <= end) {
    mid = start + (end - start) / 2;

    if (possibleSolution(arr, m, mid)) {
      ans = mid;
      start = mid + 1;
    } else {
      end = mid - 1;
    }
  }

  return ans;
}

int main() {

  vector<int> arr{4, 42, 40, 26, 46};
  int m = 20;

  cout << spojEko(arr, m);
  return 0;
}
