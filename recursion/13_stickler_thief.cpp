// https://leetcode.com/problems/house-robber/

#include <iostream>
#include <vector>
#include <limits.h>

using namespace std;

void solve(int arr[], int n, int i, int sum, int &maxi)
{

  if (i >= n)
  {
    maxi = max(maxi, sum);
    return;
  }

  // include

  solve(arr, n, i + 2, sum + arr[i], maxi);

// exclude
  solve(arr, n, i + 1, sum, maxi);
}

int FindMaxSum(int arr[], int n)
{
  int sum = 0;
  int maxi = INT_MIN;
  solve(arr, n, 0, sum, maxi);
  return maxi;
}

int main()
{

  int arr[] = {1, 2, 4};
  cout << FindMaxSum(arr, 3);

  return 0;
}
