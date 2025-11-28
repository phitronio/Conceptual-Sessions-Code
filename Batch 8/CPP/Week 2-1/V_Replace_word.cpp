/*
________________________
|                      |
|     AB Atiq          |
|______________________|
*/

// Problem link:

#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cin >> str;
    // EGYPT
    int len = str.length();
    for (int i = 0; i < len; i++)
    {
        if (str[i] == 'E' && str[i + 1] == 'G' && str[i + 2] == 'Y' && str[i + 3] == 'P' && str[i + 4] == 'T')
        {
            cout << " ";
            i += 4;
        }
        else
        {
            cout << str[i];
            // i++;
        }
    }
    return 0;
}