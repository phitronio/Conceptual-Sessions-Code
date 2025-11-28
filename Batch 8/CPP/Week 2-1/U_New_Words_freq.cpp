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
    int fre[26] = {0};
    // EGYPT
    // int e_cnt = 0, g_cnt = 0, y_cnt = 0, p_cnt = 0, t_cnt = 0;
    for (int i = 0; i < str.length(); i++)
    {
        char ch = str[i];
        ch = tolower(ch);
        int idx = ch - 'a';
        fre[idx]++;

        // if (ch == 'e')
        // {
        //     // e_cnt++;
        //     int idx = ch - 'a';
        //     fre[idx]++;
        // }
        // if (ch == 'g')
        // {
        //     int idx = ch - 'a';
        //     fre[idx]++;
        // }
        // if (ch == 'y')
        // {
        //     int idx = ch - 'a';
        //     fre[idx]++;
        // }
        // if (ch == 'p')
        // {
        //     int idx = ch - 'a';
        //     fre[idx]++;
        // }
        // if (ch == 't')
        // {
        //     int idx = ch - 'a';
        //     fre[idx]++;
        // }
    }
    // cout << e_cnt << " " << g_cnt << " " << y_cnt << " " << p_cnt << " " << t_cnt << endl;
    cout << min({fre['e' - 'a'], fre['g' - 'a'], fre['y' - 'a'], fre['p' - 'a'], fre['t' - 'a']}) << endl;
    return 0;
}