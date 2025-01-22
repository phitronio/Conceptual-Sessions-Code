#include <bits/stdc++.h>
using namespace std;

int main()
{

    vector<pair<string, int>> student_data;

    for (int i = 0; i < 3; i++)
    {
        string a;
        cin >> a;
        int roll;
        cin >> roll;
        student_data.push_back({a, roll});
    }

    for (int i = 0; i < 3; i++)
    {
        cout << student_data[i].first << " " << student_data[i].second << endl;
    }
}