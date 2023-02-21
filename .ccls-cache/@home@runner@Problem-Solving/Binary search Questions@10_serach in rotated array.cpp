// https://leetcode.com/problems/search-in-rotated-sorted-array/submissions/901285996/
#include <iostream>
#include <vector>

using namespace std;

int search_2(vector<int> &arr, int target, int start, int end) {

  int mid = start + (end - start) / 2;
  while (start <= end) {
    if (arr[mid] == target) {
      return mid;
    } else if (arr[mid] < target) {
      start = mid + 1;
    } else {
      end = mid - 1;
    }
    mid = start + (end - start) / 2;
  }
  return -1;
}

int search(vector<int> &arr, int target) {
  int start = 0;
  int end = arr.size() - 1;
  int mid = start + (end - start) / 2;
  int temp = mid;

  while (start < end) {
    if (mid + 1 < arr.size() && arr[mid] > arr[mid + 1]) {
      temp = mid;
      break;
    } else if (mid - 1 >= 0 && arr[mid - 1] > arr[mid]) {
      temp = mid - 1;
      break;
    }

    else if (arr[mid] >= arr[start]) {
      start = mid + 1;
    } else {
      end = mid - 1;
    }

    mid = start + (end - start) / 2;
  }

  if (target <= arr[temp] && target >= arr[0]) {
    return search_2(arr, target, 0, temp);
  } else {

    return search_2(arr, target, temp + 1, arr.size() - 1);
  }
}

int main() {
  vector<int> arr{5, 1, 3};
  cout << search(arr, 3);

  return 0;
}
