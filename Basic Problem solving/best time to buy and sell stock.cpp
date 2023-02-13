#include <iostream>
#include <vector>
using namespace std;

int main() {
  vector<int> array_one{7, 1, 5, 3, 6, 4};

  int max = 0;

  for (int i = 0; i < array_one.size(); i++) {
    for (int j = i + 1; j < array_one.size(); j++) {
      if ((array_one[j] - array_one[i]) > max) {
        max = (array_one[j] - array_one[i]);
      }
    }
  }
  cout << max;
  return 0;
}
