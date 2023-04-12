#include <iostream>
using namespace std;

bool sortedArray(int a[], int s, int i) {

  if (i == s) {
    return true;
  }

  if (a[i] < a[i - 1]) {
    return false;
  }

  return sortedArray(a, s, i + 1);
}

int main() {
  int a[] = {1, 3, 4, 5, 5, 5, 7};
  int s = 7;
  int i = 1;

  cout << sortedArray(a, s, i);

  return 0;
}
