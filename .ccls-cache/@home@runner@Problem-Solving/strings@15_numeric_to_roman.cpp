// https://leetcode.com/problems/integer-to-roman/description/

#include <iostream>
#include <string>

using namespace std;

int main() {
  int num = 1994;
  string ans;
  while (num > 0) {

    if (num >= 1000) {
      ans.push_back('M');
      num = num - 1000;
    }

    else if (num >= 900) {
      ans += "CM";
      num = num - 900;
    }

    else if (num >= 500) {
      ans.push_back('D');
      num = num - 500;
    }

    else if (num >= 400) {
      ans += "CD";
      num = num - 400;
    } else if (num >= 100) {
      ans.push_back('C');
      num = num - 100;
    }

    else if (num >= 90) {
      ans += "XC";
      num = num - 90;
    } else if (num >= 50) {
      ans.push_back('L');
      num = num - 50;
    }

    else if (num >= 40) {
      ans += "XL";
      num = num - 40;
    } else if (num >= 10) {
      ans.push_back('X');
      num = num - 10;
    }

    else if (num >= 9) {
      ans += "IX";
      num = num - 9;
    }

    else if (num >= 5) {
      ans.push_back('V');
      num = num - 5;
    }

    else if (num >= 4) {
      ans += "IV";
      num = num - 4;
    } else if (num >= 1) {
      ans.push_back('I');
      num = num - 1;
    }
  }
  cout << ans;
  return 0;
}
