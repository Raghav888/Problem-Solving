#include <iostream>
#include <vector>

using namespace std;

void bubbleSort(vector<int> arr) {

  for (int rounds = 1; rounds < arr.size(); rounds++) {

    for (int i = 0; i < arr.size() - rounds; i++) {

      if (arr[i] > arr[i + 1]) {
        swap(arr[i], arr[i + 1]);
      }
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
