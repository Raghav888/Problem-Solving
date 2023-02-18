#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void factorial(int num) {
  vector<int> ans;
  ans.push_back(1);
  int x = 0;
  int carry = 0;
  for (int i = 2; i <= num; i++) {
    for (int j = 0; j < ans.size(); j++) {
      x = ans[j] * i + carry;
      ans[j] = x % 10;
      carry = x / 10;
    }

    while (carry > 0) {
      ans.push_back(carry % 10);
      carry /= 10;
    }
  }

  reverse(ans.begin(), ans.end());

  for (auto val : ans) {
    cout << val;
  }
}

int main() {

  int num = 5;
  factorial(num);

  return 0;
}
