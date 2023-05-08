// https://leetcode.com/problems/letter-combinations-of-a-phone-number/submissions/946320920/

#include <iostream>
#include <vector>

using namespace std;

void solve(string &digits, vector<string> &ans, string output, int index, string mapping[])
{

    if (index >= digits.length())
    {
        ans.push_back(output);
        return;
    }

    int num = digits[index] - '0';
    string value = mapping[num];

    for (int i = 0; i < value.length(); i++)
    {
        output.push_back(value[i]);
        solve(digits, ans, output, index + 1, mapping);
        output.pop_back();
    }
}
vector<string> letterCombinations(string digits)
{
    if (digits == "")
    {
        return vector<string>{};
    }

    string mapping[10] = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};

    vector<string> ans;
    solve(digits, ans, "", 0, mapping);
    return ans;
}

int main()
{

    vector<string> ans = letterCombinations("23");

    for (auto val : ans)
    {
        cout << val << " ";
    }
}