
#include <iostream>
#include <limits.h>
#include <string>

using namespace std;

void callBack(string a, int s, int i, bool &ans) {

  // base condition

  if (i >= s) {
    return;
  }

  // processing

  if (a[i] == 'f') {
    ans = true;
    return;
  }

  // recursive call
  callBack(a, s, i + 1, ans);
}

int main() {

  string a = "raghav";
  int s = a.length();
  int i = 0;
  bool ans;
  callBack(a, s, i, ans);
  cout << ans;
  return 0;
}
