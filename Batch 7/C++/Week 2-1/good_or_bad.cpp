#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {

        string s;
        cin >> s;

        if (s.find("101") != -1 || s.find("010") != -1)
        {
            cout << "Good" << endl;
        }
        else
            cout << "Bad" << endl;
    }
}