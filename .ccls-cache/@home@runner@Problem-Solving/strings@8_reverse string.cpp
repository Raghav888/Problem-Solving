// https://leetcode.com/problems/reverse-only-letters/submissions/916893567/

#include <iostream>
#include <string>

using namespace std;

int main() {
  string s = "a-bC-dEf-ghIj";
  int i = 0;
  int j = s.length() - 1;

  while (i <= j) {

    if (((64 < int(s[i]) && int(s[i]) < 91) ||
         (96 < int(s[i]) && int(s[i]) < 123)) &&
        ((64 < int(s[j]) && int(s[j]) < 91) ||
         (96 < int(s[j]) && int(s[j]) < 123))) {

      swap(s[i], s[j]);

      i++;
      j--;
    } else if ((64 < int(s[i]) && int(s[i]) < 91) ||
               (96 < int(s[i]) && int(s[i]) < 123)) {

      j--;
    } else {

      i++;
    }
  }
  cout << s;
  return 0;
}
