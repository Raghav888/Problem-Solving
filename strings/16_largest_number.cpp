/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

bool mycmp(string a, string b) {
  string temp = a + b;
  b = b + a;
  a = temp;

  return a > b;
}

string largestNumber(vector<int> &nums) {
  vector<string> ans;
  for (int i = 0; i < nums.size(); i++) {
    ans.push_back(to_string(nums[i]));
  }

  sort(ans.begin(), ans.end(), mycmp);

  string s = "";

  if (ans[0] == "0") {
    return "0";
  }

  for (auto val : ans) {
    s = s + val;
  }
  return s;
}

int main() {
  vector<int> nums{9, 1, 3};
  cout << largestNumber(nums);
  return 0;
}
