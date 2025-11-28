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
    // cout << str;

    // EGYPT
    int e_cnt = 0, g_cnt = 0, y_cnt = 0, p_cnt = 0, t_cnt = 0;
    for (int i = 0; i < str.length(); i++)
    {
        char ch = str[i];
        // ch = tolower(ch);

        if (ch == 'e' || ch == 'E')
        {
            e_cnt++;
        }
        if (ch == 'g' || ch == 'G')
        {
            g_cnt++;
        }
        if (ch == 'y' || ch == 'Y')
        {
            y_cnt++;
        }
        if (ch == 'p' || ch == 'P')
        {
            p_cnt++;
        }
        if (ch == 't' || ch == 'T')
        {
            t_cnt++;
        }
    }
    // cout << e_cnt << " " << g_cnt << " " << y_cnt << " " << p_cnt << " " << t_cnt << endl;
    cout << min({e_cnt, g_cnt, y_cnt, p_cnt, t_cnt}) << endl;
    return 0;
}