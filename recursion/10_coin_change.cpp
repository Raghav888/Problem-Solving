// https://leetcode.com/problems/coin-change/

#include <iostream>
#include <limits.h>
#include <vector>

using namespace std;

int solve(vector<int> &coins, int amount) {

  if (amount == 0) {
    return 0;
  }

  if (amount < 0) {
    return INT_MAX;
  }

  int mini = INT_MAX;
  
  for (int i = 0; i < coins.size(); i++) {
    int temp = solve(coins, amount - coins[i]);
    if (temp != INT_MAX) {
      mini = min(mini, temp + 1);
    }
  }
  return mini;
}

int coinChange(vector<int> &coins, int amount) {

  int output = solve(coins, amount);

  if (output == INT_MAX) {
    return -1;
  }
  return output;
}

int main() {

  vector<int> coins{1, 2, 3};
  int amount = 5;
  cout << coinChange(coins, amount);

  return 0;
}
