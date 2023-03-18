// https://leetcode.com/problems/reorganize-string/submissions/917181654/
#include <iostream>
#include <limits.h>
#include <string>

using namespace std;

string reorganizeString(string s) {

  int hash[26] = {0};

  for (int i = 0; i < s.length(); i++) {
    hash[s[i] - 'a']++;
  }

  int max_freq = INT_MIN;
  char max_freq_char;

  for (int i = 0; i < 26; i++) {
    if (hash[i] > max_freq) {
      max_freq = hash[i];
      max_freq_char = i + 'a';
    }
  }

  int index = 0;

  while (index < s.length() && max_freq > 0) {
    s[index] = max_freq_char;
    max_freq--;
    index += 2;
    hash[max_freq_char - 'a']--;
  }

  if (max_freq > 0) {
    return "";
  }

  for (int i = 0; i < 26; i++) {
    while (hash[i] > 0) {

      index = index >= s.length() ? 1 : index;
      s[index] = i + 'a';
      index += 2;
      hash[i]--;
    }
  }
  return s;
}

int main() {
  string s = "xogbmcjjie";

  cout << reorganizeString(s);
  return 0;
}
