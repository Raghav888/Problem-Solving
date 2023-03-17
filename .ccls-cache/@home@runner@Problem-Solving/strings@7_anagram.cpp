/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

// https://leetcode.com/problems/valid-anagram/submissions/916003509/

#include <iostream>
#include <string>

using namespace std;

bool isAnagram(string s, string t) {

  if (s.length() != t.length()) {
    return false;
  }

  for (int i = 0; i < s.length(); i++) {
    int pos = t.find(s[i]);
    if (pos == string::npos) {
      return false;
    } else {
      t.erase(pos, 1);
    }
  }
}

int main() {
  string s = "anagram";
  string t = "nagaram";

  cout << isAnagram(s, t);
  return 0;
}
