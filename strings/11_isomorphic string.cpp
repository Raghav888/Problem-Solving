// https : // leetcode.com/problems/isomorphic-strings/submissions/917161398/
#include <iostream>
#include <string>

using namespace std;

bool isIsomorphic(string s, string t) {
  int hash[256] = {0};
  bool isTMapped[256] = {0};

  for (int i = 0; i < s.length(); i++) {

    if (hash[s[i]] == 0 && !isTMapped[t[i]]) {
      hash[s[i]] = t[i];
      isTMapped[t[i]] = true;
    }
  }

  for (int i = 0; i < s.length(); i++) {
    if (hash[s[i]] != t[i])
      return false;
  }

  return true;
}

int main() {
  string s = "babc";
  string t = "baba";

  cout << isIsomorphic(s, t);
  return 0;
}
