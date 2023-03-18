// https://leetcode.com/problems/reverse-only-letters/submissions/916893567/

#include <iostream>
#include <string>

using namespace std;

bool isVowel(char c) {
  if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'A' ||
      c == 'E' || c == 'I' || c == 'O' || c == 'U') {
    return true;
  }
  return false;
}

string reverseVowels(string s) {

  int start, end;
  start = 0;
  end = s.size() - 1;
  while (start <= end) {

    if (isVowel(s[start]) && isVowel(s[end])) {
      swap(s[start], s[end]);
      start++;
      end--;
    } else if (isVowel(s[start])) {
      end--;
    }

    else {
      start++;
    }
  }
  return s;
}

int main() {
  string s = "leetcode";

  cout << reverseVowels(s);
  return 0;
}
