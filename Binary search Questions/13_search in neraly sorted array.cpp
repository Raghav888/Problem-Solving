#include <iostream>
#include <vector>

using namespace std;

int findinNearlySortedArray(vector<int> arr, int target) {
  int start = 0;
  int end = arr.size() - 1;
  int mid = start + (end - start) / 2;

  while (start <= end) {
    if (arr[mid] == target) {

      return mid;
    } else if (mid + 1 < arr.size() && arr[mid + 1] == target) {

      return mid + 1;
    }

    else if (mid - 1 >= 0 && arr[mid - 1] == target) {

      return mid - 1;
    } else if (target > arr[mid]) {
      start = mid + 2;
    } else {
      end = mid - 2;
    }

    mid = start + (end - start) / 2;
  }

  return -1;
}

int main() {
  vector<int> arr{3, 2, 10, 4, 40};
  cout << findinNearlySortedArray(arr, 40);

  return 0;
}
