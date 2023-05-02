// IMP Qn
// find all subsequnce string

#include <iostream>
#include <string>
#include <vector>

using namespace std;

void printSubSequenceString(string s, int i, string o, vector<string> &output) {

  if (i >= s.length()) {
    output.push_back(o);
    return;
  }

  // exclude
  printSubSequenceString(s, i + 1, o, output);

  // include
  o.push_back(s[i]);
  printSubSequenceString(s, i + 1, o, output);
}

int main() {
  string s = "abc";
  string o = "";
  vector<string> output;
  int i = 0;

  printSubSequenceString(s, i, o, output);

  for (auto val : output) {
    cout << val << " " << endl;
  }

  return 0;
}
