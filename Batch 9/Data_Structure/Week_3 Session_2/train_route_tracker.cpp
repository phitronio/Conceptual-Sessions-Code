#include <bits/stdc++.h>
using namespace std;

main()
{
    list<string> lst;
    string s;
    while (cin >> s)
    {
        if (s == "end")
        {
            break;
        }
        lst.push_back(s);
    }
    // for (string a : lst)
    // {
    //     cout << a << endl;
    // }
    int query;
    cin >> query;

    auto cur_loc = lst.end();
    for (int i = 0; i < query; i++)
    {
        // auto cur_loc = NULL;
        string cmd, loc;
        cin >> cmd;
        if (cmd == "visit")
        {
            cin >> loc;
            // cout << cmd << " " << loc << endl;
            bool flag = false; // loc not present
            // for (string a : lst)
            // {
            //     if (a == loc)
            //     {
            //         cout << loc << endl;
            //         flag = true;
            //         break;
            //     }
            // }
            // if (flag == false)
            // {
            //     cout << "Location/Station does not exist!!";
            // }
            for (auto it = lst.begin(); it != lst.end(); it++)
            {
                if (*it == loc)
                {
                    cout << loc << endl;
                    flag = true;
                    cur_loc = it;
                    break;
                }
            }
            if (flag == false)
            {
                cout << "Location/Station does not exist!!";
            }
        }
        else
        {
            // next or prev
            // not need loc
            // cout << cmd << endl;
            if (cur_loc == lst.end())
            {
                // next and prev not possible
            }
            else if (cmd == "next")
            {
                if (next(cur_loc) == lst.end())
                {
                    cout << "Next location does not exist!!" << endl;
                    // cur_loc = next(cur_loc); // end position
                }
                else
                {
                    // cout << *next(cur_loc) << endl;
                    // cur_loc = next(cur_loc);
                    cur_loc = next(cur_loc);
                    cout << *cur_loc << endl;
                }
            }
            // else if (cmd == "prev")
            else
            {
                // prev(cur_loc) = previous location find
                if (cur_loc == lst.begin())
                {
                    cout << "Previous location does not exist!!" << endl;
                    // cur_loc = lst.end(); // end position or invalid position
                }
                else
                {
                    cur_loc = prev(cur_loc);
                    cout << *cur_loc << endl;
                }
            }
        }
    }
    return 0;
}