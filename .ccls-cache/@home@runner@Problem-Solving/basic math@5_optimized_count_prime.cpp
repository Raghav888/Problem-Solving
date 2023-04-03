// https://leetcode.com/problems/count-primes/description/
// optimized sieve of eratosthemes method

// This can be used for such Q.=> print all prime till n
// Sum of all prime till n
// product of primes till n, etc

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

  for (int i = 2; i * i < n; i++) { // no need to traverse after sq.root of n so
                                    // i*i<=n i.w i <=sq.root(n)

    if (prime[i]) {
      ans++;

      int j = i * i; // first unmakred will be i*i
      while (j < n) {
        prime[j] = false;
        j += i;
      }
    }
  }
  return ans; //(nlog(logn))
}

int main() {

  cout << countPrimes(10);
  return 0;
}