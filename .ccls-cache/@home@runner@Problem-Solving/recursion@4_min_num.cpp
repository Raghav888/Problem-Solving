
#include <iostream>
#include <limits.h>

using namespace std;

void callBack(int a[], int s, int i, int &min) {

  // base condition

  if (i >= s) {
    return;
  }

  // processing

  if (a[i] < min) {
    min = a[i];
  }

  // recursive call
  callBack(a, s, i + 1, min);
}

int main() {

  int a[] = {1, 200, 0, -9, 31, 4322, 500};
  int s = 5;
  int min = INT_MAX;
  int i = 0;
  callBack(a, s, i, min);

  cout << min;
  return 0;
}
