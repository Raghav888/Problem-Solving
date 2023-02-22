#include <iostream>
#include <vector>

using namespace std;

double divideNumberBinarySearch(int divident, int divisor) {
  int start = abs(divisor);
  int end = abs(divident);
  int mid = start + (end - start) / 2;
  double temp = -1;

  while (start <= end) {
    if (mid * abs(divisor) == abs(divident)) {

      return mid;
    } else if (mid * abs(divisor) > abs(divident)) {

      end = mid - 1;
    }

    else {
      temp = mid;
      start = mid + 1;
    }

    mid = start + (end - start) / 2;
  }

  double step = 0.1;

  for (int i = 0; i < 3; i++) {

    for (double j = temp; j * j <= abs(divident); j += step) {
      temp = j;
    }

    step *= 0.1;
  }

  if ((divident < 0 && divisor < 0) || (divident > 0 && divisor > 0)) {
    return temp;
  } else {
    return -temp;
  }
}

int main() {
  int divident = -10;
  int divisor = 3;
  cout << divideNumberBinarySearch(divident, divisor);

  return 0;
}
