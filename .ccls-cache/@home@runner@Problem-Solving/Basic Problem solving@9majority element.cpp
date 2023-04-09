#include <iostream>
#include <vector>

using namespace std;

int main() {
  vector<int> array_one{3, 3, 4, 2, 4, 4, 2, 4};

  int mid = array_one.size() / 2;
  int count = 0;
  for (int i = 0; i < array_one.size(); i++) {
    count = 0;
    for (int j = i; j < array_one.size(); j++) {
      if (array_one[i] == array_one[j]) {
        count++;
      }
    }
    if (count > mid) {
      cout << array_one[i] << " is the majority element";
      break;
    }
  }

  if (count < mid) {
    cout << "No majority element";
  }

  return 0;
}
