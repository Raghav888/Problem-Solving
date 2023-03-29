// https://leetcode.com/problems/count-primes/description/
// sieve of eratosthemes method

#include <iostream>
#include <vector>
using namespace std;

int countPrimes(int n) {
  if (n == 0) {
    return 0;
  }

  int ans = 0;
  vector<bool> prime(n, true);

  prime[0] = prime[1] = false;

  for (int i = 2; i < n; i++) {

    if (prime[i]) {
      ans++;

      int j = i * 2;
      while (j < n) {
        prime[j] = false;
        j += i;
      }
    }
  }
  return ans;
}

int main() {

  cout << countPrimes(10);
  return 0;
}