#include <iostream>
#include <vector>

using namespace std;

// We use bubble sort when in Q we see, bring ith element on its correct position.
// Also sinking sort is its another name.
// Bubble sort is stable sort
// In Bubble sort we are pushing ith largest element to right side.

void bubbleSort(vector<int> arr) {

  for (int rounds = 1; rounds < arr.size(); rounds++) {

    // Best Case TC O(N), worst case O(N^2)
    bool swapped = false;
    for (int i = 0; i < arr.size() - rounds; i++) {
 
      if (arr[i] > arr[i + 1]) {
        swapped = true;
        swap(arr[i], arr[i + 1]);
      }
    }

    if (!swapped) {
      break;
    }
  }

  for (int val : arr) {
    cout << val << " ";
  }
}

int main() {

  vector<int> arr{100, 99, 4, 42, 40, 26, 46};
  bubbleSort(arr);
  return 0;
}
