/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

string longestCommonPrefix(vector<string> &s) {

  sort(s.begin(), s.end());
  int i = 0;
  while (i < s[0].length() && i < s[s.size() - 1].length() &&
         s[0][i] == s[s.size() - 1][i]) {
    i++;
  }
  if (i == 0) {
    return "";
  }
  return s[0].substr(0, i);
}

int main() {
  vector<string> s{"dog", "racecar", "car"};
  cout << longestCommonPrefix(s);
  return 0;
}
