#include <iostream>
#include <vector>

using namespace std;

// Used to sort when arr is partially sorted

void insertionSort(vector<int> arr) {

  for (int rounds = 1; rounds < arr.size(); rounds++) {

    // Step 1: access the element
    int val = arr[rounds];

    // compare it elements before it and shift it
    int j = rounds - 1;
    for (; j > -1; j--) {

      if (arr[j] > val) {
        arr[j + 1] = arr[j];
      } else {
        break;
      }
    }
    // Copy the val in arr

    arr[j + 1] = val;
  }

  for (int val : arr) {
    cout << val << " ";
  }
}

int main() {

  vector<int> arr{100, 99, 4, 42, 40, 26, 46};
  insertionSort(arr);
  return 0;
}
