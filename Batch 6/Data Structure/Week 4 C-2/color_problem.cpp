#include <bits/stdc++.h>
using namespace std;

int main()
{

    string colors;
    cin >> colors;

    stack<char> st;

    int sz = colors.size();
    int flag = 0;

    for (int i = 0; i < sz; i++)
    {

        if (st.empty() == true)
        {
            st.push(colors[i]);
        }
        else
        {

            if ((st.top() == 'B' && colors[i] == 'Y') || (st.top() == 'Y' && colors[i] == 'B'))
            {
                st.pop();
                st.push('G');
            }
            else if ((st.top() == 'R' && colors[i] == 'B') || (st.top() == 'B' && colors[i] == 'R'))
            {
                st.pop(); // red and blue mix hoye purple create
            }
            else if ((st.top() == 'R' && colors[i] == 'Y') || (st.top() == 'Y' && colors[i] == 'R'))
            {
                st.pop(); // red and yellow mix hoye orange create
            }
            else if ((st.top() == 'R' && colors[i] == 'G') || (st.top() == 'G' && colors[i] == 'R'))
            {
                flag = 1;
                break;
            }
            else
            {
                st.push(colors[i]);
            }
        }
    }

    if (flag == 1)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}