// https://leetcode.com/problems/single-element-in-a-sorted-array/submissions/902645323/
// https://www.geeksforgeeks.org/find-the-element-that-odd-number-of-times-in-olog-n-time/

#include <iostream>
#include <vector>

using namespace std;

int search(vector<int> arr) {
  int start = 0;
  int end = arr.size() - 1;
  int mid = start + (end - start) / 2;

  while (start <= end) {

    if (start == end) {
      return arr[start];
    }

    else if (mid % 2 == 0) {
      if (arr[mid] == arr[mid + 1]) {
        start = mid + 2;
      } else {

        end = mid;
      }
    } else {

      if (arr[mid] == arr[mid - 1]) {
        start = mid + 1;
      } else {
        end = mid - 1;
      }
    }
    mid = start + (end - start) / 2;
  }
  return -1;
}

int main() {

  vector<int> arr{1, 1, 2, 2, 3, 3, 4, 4, 3, 600, 600, 4, 4};
  cout << search(arr);

  return 0;
}
