#include <iostream>
#include <vector>

using namespace std;

double squareRoot(int num) {
  int start = 0;
  int end = num;
  int mid = start + (end - start) / 2;
  double ans;

  while (start <= end) {
    if (mid * mid == num) {
      ans = mid;
      break;
    } else if (mid * mid > num) {
      end = mid - 1;
    } else {
      ans = mid;
      start = mid + 1;
    }
    mid = start + (end - start) / 2;
  }

  double step = 0.1;

  for (int i = 0; i < 3; i++) {
    for (double j = ans; j * j <= num; j = j + step) {
      ans = j;
    }
    step *= 0.1;
  }

  return ans;
}

int main() {
  int num = 9;
  cout << squareRoot(num);

  return 0;
}
