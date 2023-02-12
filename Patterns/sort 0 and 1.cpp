#include <iostream>
#include <vector>

using namespace std;

int main() {
  vector<int> array_one{1, 0, 0, 1, 0, 1, 0};

  int start = 0;
  int end = array_one.size() - 1;
  int i = 0;
  while (start < end) {

    if (array_one[i] == 0) {
      swap(array_one[i], array_one[start]);
      start++;
      i++;
    } else {
      swap(array_one[i], array_one[end]);
      end--;
    }
  }

  for (auto val : array_one) {
    std::cout << val << std::endl;
  }

  return 0;
}
