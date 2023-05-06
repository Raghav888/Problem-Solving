/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

void solve(string str, char x, int &output, int i)
{

    if (i < 0)
    {
        return;
    }

    if (str[i] == x)
    {
        output = i;
    }

    solve(str, x, output, i - 1);
}

int main()
{
    // String in which char is to be found
    string str = "geeksforgeeks";

    // char whose index is to be found
    char x = 'e';
    int output = -1;
    int i = str.length() - 1;

    solve(str, x, output, i);
    cout << output << endl;

    return 0;
}
