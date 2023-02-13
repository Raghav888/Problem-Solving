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

  for (int j = array_one.size() - 1; j > 0; j--) {
    swap(array_one[j - 1], array_one[j]);
  }

  printArray(array_one);

  return 0;
}
