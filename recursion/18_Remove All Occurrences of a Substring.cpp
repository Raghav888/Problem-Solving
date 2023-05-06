// https://leetcode.com/problems/remove-all-occurrences-of-a-substring/description/
#include <iostream>
#include <string.h>

using namespace std;

void solve(string &s, string &sub, int pos)
{
    if (pos == string::npos)
    {
        return;
    }

    s.erase(pos, sub.length());
    pos = s.find(sub);

    solve(s, sub, pos);
}
string removeOccurrences(string s, string sub)
{
    int pos = s.find(sub);

    solve(s, sub, pos);
    return s;
}

int main()
{
    cout << removeOccurrences("daabcbaabcbc", "abc");
    return 0;
}