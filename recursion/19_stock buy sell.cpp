
// https://leetcode.com/problems/best-time-to-buy-and-sell-stock/description/

#include <iostream>
#include <vector>
#include <limits.h>

using namespace std;

void solve(vector<int> &prices, int today, int &mini, int &maxi)
{

    if (today >= prices.size())
    {
        return;
    }

    if (prices[today] < mini)
    {
        mini = prices[today];
    }

    if (prices[today] - mini > maxi)
    {
        maxi = prices[today] - mini;
    }

    solve(prices, today + 1, mini, maxi);
}
int maxProfit(vector<int> &prices)
{

    int maxi = 0;
    int mini = INT_MAX;

    solve(prices, 0, mini, maxi);

    return maxi;
}

int main()
{

    vector<int> a{7, 1, 5, 3, 6, 4};
    cout << maxProfit(a);

    return 0;
}
