#include <bits/stdc++.h>
using namespace std;
int main()
{
    int q;
    cin >> q;

    queue<string> qu;
    while (q--)
    {
        string cmd;
        cin >> cmd;
        if (cmd == "JOIN")
        {
            string name;
            cin >> name;
            // can not present more than 100
            if (qu.size() >= 5)
            {
                cout << "can not present more than 100" << endl;
            }
            else
            {
                qu.push(name);
            }
        }
        else /// DONE part
        {
            if (qu.empty())
            {
                cout << "No Student present in support session!!" << endl;
            }
            else
            {
                cout << qu.front() << endl;
                qu.pop();
            }
        }
    }

    return 0;
}