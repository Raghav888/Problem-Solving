// https://leetcode.com/problems/string-compression/
// Run length encoding algo
// used for compression

#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

void compressString(vector<char> &s) {

  int count = 1;
  int index = 0;
  char prev = s[0];

  for (int i = 1; i < s.size(); i++) {

    if (s[i] == prev) {
      count++;
    } else {
      s[index] = prev;
      index++;
      if (count > 1) {
        int start = index;
        while (count) {
          s[index] = (count % 10) + '0';
          count /= 10;
          index++;
        }
        reverse(s.begin() + start, s.begin() + index);
      }

      count = 1;
      prev = s[i];
    }
  }

  s[index] = prev;
  index++;
  if (count > 1) {
    int start = index;
    while (count) {
      s[index] = (count % 10) + '0';
      count /= 10;
      index++;
    }
    reverse(s.begin() + start, s.begin() + index);
  }
}

int main() {
  vector<char> s{'a', 'a', 'b', 'b', 'b', 'b', 'b',
                 'b', 'b', 'b', 'b', 'b', 'b', 'b'};

  compressString(s);

  for (auto val : s) {
    cout << val << " ";
  }

  return 0;
}
