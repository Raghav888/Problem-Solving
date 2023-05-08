
// https://leetcode.com/problems/number-of-dice-rolls-with-target-sum/
#include <iostream>
#include <vector>
#include <limits.h>

using namespace std;

void solve(int dice, int k, int target, int &ans)
{

    if (target < 0)
    {
        return;
    }
    if (dice == 0 && target == 0)
    {
        ans++;
    }

    if (dice == 0 && target != 0)
    {
        return;
    }

    if (dice != 0 && target == 0)
    {
        return;
    }

    for (int i = 1; i <= k; i++)
    {
        solve(dice - 1, k, target - i, ans);
    }
}

int main()
{
    int ans = 0;
    solve(1, 6, 3, ans);
    cout << ans;
    return 0;
}
