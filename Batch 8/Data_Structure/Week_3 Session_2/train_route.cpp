#include <bits/stdc++.h>
using namespace std;
int main()
{
    list<string> route;
    string station;
    while (cin >> station)
    {
        if (station == "end")
        {
            break;
        }
        route.push_back(station);
    }

    // for (string st : route)
    // {
    //     cout << st << endl;
    // }

    auto current_station = route.end();
    int query;
    cin >> query;
    while (query--)
    {

        string command;
        cin >> command;
        if (command == "visit")
        {
            // loop - station find
            string find_st_name;
            cin >> find_st_name;
            bool flag = false;
            for (auto it = route.begin(); it != route.end(); it++)
            {
                if (*it == find_st_name)
                {
                    cout << find_st_name << endl;
                    current_station = it;
                    flag = true;
                    // return 0;
                }
            }
            if (!flag)
            {
                cout << "Not Station Exist" << endl;
            }
        }
        else if (command == "next")
        {
            // next of currect station
            if (current_station == route.end())
            {
                cout << "Next Station Not Exist" << endl;
            }
            else
            {
                cout << *next(current_station) << endl;
                // current_station = next(current_station);
            }
        }
        else if (command == "prev")
        {
            // previous of currect station
            if (current_station == route.begin() || current_station == route.end())
            {
                cout << "Previous Station Not Exist" << endl;
            }
            else
            {
                cout << *prev(current_station) << endl;
                // current_station = prev(current_station);
            }
        }
    }
    return 0;
}