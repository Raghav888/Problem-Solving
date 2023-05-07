// https://leetcode.com/problems/minimum-cost-for-tickets/

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int solve(vector<int> &days, vector<int> &costs, int i)
{

    if (i >= days.size())
    {
        return 0;
    }

    // Day 1
    int cost1 = costs[0] + solve(days, costs, i + 1);

    // Day 7
    int passEndDay = days[i] + 7 - 1;
    int j = i;
    while (j < days.size() && days[j] <= passEndDay)
    {
        j++;
    }
    int cost2 = costs[1] + solve(days, costs, j);

    // Day 30
    passEndDay = days[i] + 30 - 1;
    j = i;
    while (j < days.size() && days[j] <= passEndDay)
    {
        j++;
    }
    int cost3 = costs[2] + solve(days, costs, j);

    return min(cost1, min(cost2, cost3));
}

int mincostTickets(vector<int> &days, vector<int> &costs)
{
    return solve(days, costs, 0);
}

int main()
{
    vector<int> days{1, 4, 6, 7, 8, 20};
    vector<int> costs{2, 7, 15};
    cout << mincostTickets(days, costs);
    return 0;
}