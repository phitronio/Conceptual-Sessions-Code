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
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n;
        cin >> n;
        string str;
        cin >> str;
        bool visited[26] = {false};

        int cnt_ballons = 0;
        for (int i = 0; i < n; i++)
        {
            char ch = str[i];
            int idx = ch - 'A';
            if (visited[idx] == false) // first time solved
            {
                cnt_ballons += 2;
                visited[idx] = true;
            }
            else // second time solved
            {
                cnt_ballons += 1;
            }
        }
        cout << cnt_ballons << endl;
    }
    return 0;
}