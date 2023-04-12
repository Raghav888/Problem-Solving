#include <iostream>
#include <vector>
using namespace std;
// we should pass vector by refernce, so that memory can be saved when
// recursive call. It will take very less space and fast execution
// array by default is pass by refernce
int binarySearch(vector<int> &arr, int s, int e, int target) {

  if (s > e) {
    return -1;
  }

  int mid = s + (e - s) / 2;

  if (arr[mid] == target) {
    return mid;
  }

  else if (arr[mid] > target) {
    return binarySearch(arr, s, mid, target);
  } else {
    return binarySearch(arr, mid + 1, e, target);
  }
}

int main() {

  vector<int> arr{1, 2, 34, 55, 67};

  cout << binarySearch(arr, 0, arr.size() - 1, 7845);

  return 0;
}
