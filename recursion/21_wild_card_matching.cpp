
#include <iostream>
#include <string.h>

using namespace std;

bool isMatchHelper(string s, int s1, string p, int s2)
{

    if (s1 == s.length() && s2 == p.length())
    {
        return true;
    }

    if (s1 == s.length() && s2 < p.length())
    {

        while (s2 < p.length())
        {
            if (p[s2] != '*')
            {
                return false;
            }
            s2++;
        }
        return true;
    }

    if (s[s1] == p[s2] || p[s2] == '?')
    {
        return isMatchHelper(s, s1 + 1, p, s2 + 1);
    }

    if (p[s2] == '*')
    {
        bool a1 = isMatchHelper(s, s1 + 1, p, s2);
        bool a2 = isMatchHelper(s, s1, p, s2 + 1);
        return a1 || a2;
    }

    return false;
}

bool isMatch(string s, string p)
{

    return isMatchHelper(s, 0, p, 0);
}

int main()
{
    cout << isMatch("aa", "8");
    return 0;
}