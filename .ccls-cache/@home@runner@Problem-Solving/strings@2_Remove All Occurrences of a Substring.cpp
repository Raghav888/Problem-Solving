// https://leetcode.com/problems/remove-all-occurrences-of-a-substring/description/
#include <iostream>
#include <string.h>

using namespace std;

string removeOccurrences(string s, string sub) {
  int pos = s.find(sub);

  while (pos != string::npos) {
    s.erase(pos, sub.length());
    pos = s.find(sub);
  }
  return s;
}

int main() {
  cout << removeOccurrences("daabcbaabcbc", "abc");
  return 0;
}