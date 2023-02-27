
// https://leetcode.com/problems/remove-all-adjacent-duplicates-in-string/description/

#include <iostream>
#include <string.h>

using namespace std;

string removeDuplicates(string s) {
  string ans = "";
  for (int i = 0; i < s.length(); i++) {
    if (ans.length() > 0 && ans[ans.length() - 1] == s[i]) {
      ans.pop_back();
    } else {
      ans.push_back(s[i]);
    }
  }
  return ans;
}

int main() {
  cout << removeDuplicates("aabbghsa");
  return 0;
}