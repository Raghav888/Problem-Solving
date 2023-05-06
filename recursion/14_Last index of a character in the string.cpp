

#include <iostream>

using namespace std;

void solve(string str, char x, int &output, int i)
{

    if (i >= str.length())
    {
        return;
    }

    if (str[i] == x)
    {
        output = i;
    }

    solve(str, x, output, i + 1);
}

int main()
{
    // String in which char is to be found
    string str = "geeksforgeeks";

    // char whose index is to be found
    char x = 'e';
    int output = -1;
    int i = 0;

    solve(str, x, output, i);
    cout << output << endl;

    return 0;
}
