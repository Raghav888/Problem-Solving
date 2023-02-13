#include <iostream>
#include <vector>

using namespace std;

int main() {
  vector<int> array_one{1, 2, 3, 4, 5, 6, 7, 8};

  int start = 0;
  int end = array_one.size() - 1;

  while (start <= end) {
    swap(array_one[start], array_one[end]);
    start++;
    end--;
  }

  for (auto val : array_one) {
    cout << val << " ";
  }

  return 0;
}
