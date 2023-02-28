// https://leetcode.com/problems/minimum-time-difference/description/

#include <algorithm>
#include <iostream>
#include <limits.h>
#include <string>
#include <vector>

using namespace std;

int findMinDifference(vector<string> &timePoints) {

  vector<int> min;

  for (int i = 0; i < timePoints.size(); i++) {
    int hour = stoi(timePoints[i].substr(0, 2));
    int totalMin = hour * 60 + stoi(timePoints[i].substr(3, 2));
    min.push_back(totalMin);
  }

  sort(min.begin(), min.end());

  int ans = INT_MAX;

  for (int i = 0; i < min.size() - 1; i++) {

    if (min[i + 1] - min[i] < ans) {
      ans = min[i + 1] - min[i];
    }
  }

  ans = (min[0] + 1440) - min[min.size() - 1] < ans
            ? (min[0] + 1440) - min[min.size() - 1]
            : ans;

  return ans;
}

int main() {
  vector<string> arr{"00:00", "23:59", "00:00"};
  cout << findMinDifference(arr);
  return 0;
}