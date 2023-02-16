#include <iostream>
#include <vector>

using namespace std;

int main() {
  vector<int> array1{-12, 11, -13, -5, 6, -7, 5, -3, -6};

  int start = 0;
  int end = array1.size() - 1;
  int i = 0;
  while (start < end) {

    if (array1[i] < 0) {
      swap(array1[i], array1[start]);
      i++;
      start++;
    } else {
      swap(array1[i], array1[end]);
      end--;
    }
  }

  for (auto val : array1) {
    cout << val << " ";
  }

  return 0;
}
