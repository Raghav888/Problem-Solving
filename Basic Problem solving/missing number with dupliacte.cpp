#include <iostream>
#include <vector>
using namespace std;

void findMissingNumbers(vector<int> arr, int size) {

  for (int i = 0; i < size; i++) {
    int e = abs(arr[i]);

    if (arr[e - 1] > 0) {
      arr[e - 1] *= -1;
    }
  }

  for (int i = 0; i < size; i++) {
    if (arr[i] > 0) {
      cout << i + 1 << " ";
    }
  }
}

int main() {
  vector<int> arr{1, 3, 2, 5, 5, 5};
  findMissingNumbers(arr, arr.size());

  return 0;
}
