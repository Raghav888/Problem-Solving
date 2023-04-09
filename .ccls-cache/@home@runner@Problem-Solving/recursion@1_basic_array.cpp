#include <iostream>

using namespace std;

int callBack(int a[], int s) {

  // base condition

  if (s == 0) {
    return 0; 
  }

  // recursive call
  // head recursion

  callBack(a, s - 1);

  // processing
  cout << a[s - 1];
  return 0;
}

int main() {

  int a[] = {1, 2, 3, 4, 5};
  int s = 5;
  int t = callBack(a, s);
  return 0;
}
