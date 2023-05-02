#include <iostream>
#include <limits.h>

using namespace std;

void callBack(int a[], int s, int i, int &max) {

  // base condition

  if (i >= s) {
    return;
  }

  // processing

  if (a[i] > max) {
    max = a[i];
  }

  // recursive call
  callBack(a, s, i + 1, max);
}

int main() {

  int a[] = {1, 200, 31, 4322, 500};
  int s = 5;
  int max = INT_MIN;
  int i = 0;
  callBack(a, s, i, max);
  
  cout << max;
  return 0;
}
