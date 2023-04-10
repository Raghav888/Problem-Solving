
#include <iostream>

using namespace std;

void printDigit(int n) {

  // baseConition
  if (n == 0) {
    return;
  }

  // recusion
  printDigit(n / 10);
  // processing

  cout << n % 10;
}

int main() {

  int n = 4560;
  printDigit(n);
  return 0;
}
