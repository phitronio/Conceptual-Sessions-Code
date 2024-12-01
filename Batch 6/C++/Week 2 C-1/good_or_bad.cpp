#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {

        string s;
        cin >> s;

        if (s.find("010") != -1 || s.find("101") != -1)
        {
            cout << "Good" << endl;
        }
        else
        {
            cout << "Bad" << endl;
        }
    }
}