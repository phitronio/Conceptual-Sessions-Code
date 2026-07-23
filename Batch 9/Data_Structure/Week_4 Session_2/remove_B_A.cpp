#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    stack<char> st;
    for (char ch : s)
    {
        if (st.empty())
        {
            st.push(ch);
        }
        else if (ch == 'A' && st.top() == 'B')
        {
            st.pop(); // BA matched, so remove both
        }
        else
        {
            st.push(ch);
        }
    }
    if (st.empty())
    {
        cout << "String Empty" << endl;
    }
    else
    {
        string tem = "";
        while (!st.empty())
        {
            tem += st.top();
            st.pop();
        }
        reverse(tem.begin(), tem.end()); // make original order from revese string
        cout << tem << endl;
    }
    return 0;
}