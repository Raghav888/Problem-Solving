#include <iostream>
#include <vector>

using namespace std;
//  Selection  sort is stable sort

void selectionSort(vector<int> arr) {

  for (int i = 0; i < arr.size() - 2; i++) {
    for (int j = i + 1; j < arr.size() - 1; j++) {
      if (arr[i] > arr[j]) {
        swap(arr[i], arr[j]);
      }
    }
  }

  for (int val : arr) {
    cout << val << " ";
  }
}

int main() {

  vector<int> arr{4, 42, 40, 26, 46};
  selectionSort(arr);
  return 0;
}
