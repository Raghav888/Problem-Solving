// Unbounded will be similar just in that we wont have i< size() condition as
// its infifite array.

#include <iostream>
#include <vector>

using namespace std;

int binarySearch(vector<int> arr, int start, int end, int target) {
  int mid = start + (end - mid) / 2;

  while (start <= end) {

    if (arr[mid] == target) {
      return mid;
    } else if (arr[mid] > target) {
      end = mid - 1;
    } else {
      start = mid + 1;
    }

    mid = start + (end - start) / 2;
  }

  return -1;
}

int exponentialSearch(vector<int> arr, int target) {

  if (arr[0] == target) {
    return 0;
  }

  int i = 1;

  while (i < arr.size() && arr[i] < target) {
    i = i * 2;
  }

  return binarySearch(arr, i / 2, i, target);
}

int main() {
  vector<int> arr{10, 15, 25, 45, 55};
  cout << exponentialSearch(arr, 15);

  return 0;
}
