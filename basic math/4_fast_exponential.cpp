// IMP
//  a^b => if b is even=> (a^(b/2))^2
//  a^b => if b is odd => ((a^(b/2))^2)*a
//  if %M is asked in question, do at all steps here big opertiosn are done.

#include <iostream>

using namespace std;

int fastExponential(int a, int b) {
  int ans = 1;

  while (b > 0) {

    if (b % 2 != 0) {
      ans = ans * a;
    }

    a = a * a;
    b >>= 1; // right shift so that b becomes b/2
  }

  return ans;
}

int main() {
  int a = 2;
  int b = 5;
  cout << fastExponential(a, b);
  return 0;
}
