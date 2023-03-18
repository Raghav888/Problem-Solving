// https://leetcode.com/problems/group-anagrams/description/
#include <algorithm>
#include <iostream>
#include <map>
#include <string>
#include <vector>

using namespace std;

vector<vector<string>> groupAnagrams(vector<string> &strs) {

  map<string, vector<string>> mp;

  for (auto str : strs) {

    string s = str;
    sort(s.begin(), s.end());
    mp[s].push_back(str);
  }

  vector<vector<string>> ans;

  for (auto s = mp.begin(); s != mp.end(); s++) {
    ans.push_back(s->second);
  }
  return ans;
}

int main() {

  vector<string> strs{"eat", "tea", "tan", "ate", "nat", "bat"};
  vector<vector<string>> ans = groupAnagrams(strs);

  for (int i = 0; i < ans.size(); i++) {
    for (int j = 0; j < ans[i].size(); j++) {
      cout << ans[i][j] << " ";
    }
    cout << endl;
  }

  return 0;
}
