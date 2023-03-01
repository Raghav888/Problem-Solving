// https://leetcode.com/problems/palindromic-substrings/description/

#include <iostream>
#include <string>

using namespace std;

int expandSearch(string s, int i, int j) {
  int count = 0;
  while (i >= 0 && j < s.length() && s[i] == s[j]) {
    count++;
    i--;
    j++;
  }
  return count;
}
int countSubstrings(string s) {

  int count = 0;

  for (int i = 0; i < s.length(); i++) {

    int oddCount = expandSearch(s, i, i);
    count += oddCount;

    int evenCount = expandSearch(s, i, i + 1);
    count += evenCount;
  }
  return count;
}

int main() {
  cout << countSubstrings("aaa");
  return 0;
}