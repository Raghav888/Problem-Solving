#include <iostream>
#include <vector>

using namespace std;

void printArray(vector<int> array_one) {
  for (auto val : array_one) {
    cout << val << " ";
  }
  cout << endl;
}

int main() {
  vector<int> array_one{1, 2, 3, 4, 5, 6, 7, 8};

  for (int i = 0; i < array_one.size() - 1; i++) {
    swap(array_one[i], array_one[i + 1]);
  }

  printArray(array_one);

  return 0;
}
