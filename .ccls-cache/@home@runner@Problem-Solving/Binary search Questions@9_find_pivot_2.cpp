#include <iostream>
#include <vector>

using namespace std;

int findPivotIndex(vector<int> arr) {

  int start = 0;
  int end = arr.size() - 1;
  int mid = start + (end - start) / 2;

  while (start <= end) {

    if (mid - 1 >= 0 && arr[mid] < arr[mid - 1]) {
      return mid;
    } else if (mid + 1 < arr.size() && arr[mid + 1] < arr[mid]) {
      return mid + 1;
    }

    else if (arr[mid] >= arr[start]) {
      start = mid + 1;
    } else {
      end = mid - 1;
    }

    mid = start + (end - start) / 2;
  }

  return mid;
}

int main() {
  vector<int> arr{1, 2, 3, 4, 5, 1};
  cout << findPivotIndex(arr);

  return 0;
}
