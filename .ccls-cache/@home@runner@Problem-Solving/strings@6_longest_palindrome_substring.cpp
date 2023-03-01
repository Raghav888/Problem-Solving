// https://leetcode.com/problems/longest-palindromic-substring/submissions/906837789/

#include <iostream>
#include <limits.h>
#include <string>
using namespace std;

void expandSearch(string s, int i, int j, int &stringlength, int &start,
                  int &end) {

  while (i >= 0 && j < s.length() && s[i] == s[j]) {

    if (j - i > stringlength) {
      start = i;
      end = j;
      stringlength = j - i;
    }

    i--;
    j++;
  }
}

string longestPalindrome(string s) {

  int start = 0;
  int end = 0;
  int stringlength = INT_MIN;
  for (int i = 0; i < s.length(); i++) {

    expandSearch(s, i, i, stringlength, start, end);

    expandSearch(s, i, i + 1, stringlength, start, end);
  }
  return s.substr(start, end - start + 1);
}

int main() {
  string s = "babad";
  cout << longestPalindrome(s);
  return 0;
}
