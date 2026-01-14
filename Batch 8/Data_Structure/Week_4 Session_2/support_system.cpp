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
    int Q;
    cin >> Q;
    queue<string> que;
    while (Q--)
    {
        string cmd;
        cin >> cmd;
        if (cmd == "Join")
        {
            string name;
            cin >> name;

            // if (que.size() >= 5)
            //     continue;
            // que.push(name);

            if (que.size() < 5)
            {
                que.push(name);
            }
        }
        else if (cmd == "Done")
        {
            if (que.empty())
            {
                // cout << "No student present" << endl;
            }
            else
            {
                cout << que.front() << endl;
                que.pop();
            }
        }
    }
    return 0;
}