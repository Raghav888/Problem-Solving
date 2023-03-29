#include <iostream>
#include <vector>

using namespace std;

int main() {
  vector<int> array_one{2, 3, 4, 5, 6, 7, 8};

  int start = 0;
  int end = array_one.size() - 1;

  while (start <= end) {
    cout << array_one[start] << " ";
    if (start != end) {
      cout << array_one[end] << " ";
    }
    start++;
    end--;
  }

  return 0;
}
