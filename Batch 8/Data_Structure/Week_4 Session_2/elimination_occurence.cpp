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
    stack<char> st;
    for (int i = 0; i < str.size(); i++)
    {
        if (st.empty())
        {
            st.push(str[i]);
        }
        else if (st.top() == 'B' && str[i] == 'A')
        {
            st.pop();
        }
        else
        {
            st.push(str[i]);
        }
    }

    string res = "";
    while (!st.empty())
    {
        res += st.top();
        st.pop();
    }
    reverse(res.begin(), res.end()); // original order
    cout << res << endl;
    return 0;
}