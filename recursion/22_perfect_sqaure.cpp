// https://leetcode.com/problems/perfect-squares/

#include <iostream>
#include <limits.h>
#include <cmath>

using namespace std;

int solve(int n)
{

    if (n == 0)
    {
        return 1;
    }
    if (n < 0)
    {
        return 0;
    }

    int ans = INT_MAX;
    int i = 1;
    while (i <= sqrt(n))
    {
        int perfectSquare = i * i;
        int num = 1 + solve(n - perfectSquare);
        ans = min(num, ans);
        i++;
    }
    return ans;
}

int numSquares(int n)
{
    return solve(n) - 1;
}

int main()
{
    cout << numSquares(13);
    return 0;
}