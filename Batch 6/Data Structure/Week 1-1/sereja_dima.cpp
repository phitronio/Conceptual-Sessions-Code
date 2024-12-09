#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin >> n;

    vector<int> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    int sereja = 0; // 1
    int dima = 0;   // 2

    int kar_move = 1;

    while (v.size() != 0)
    {
        if (kar_move == 1)
        {

            if (v.front() < v.back())
            {

                sereja += v.back();
                v.pop_back();
            }
            else
            {
                sereja += v.front();
                v.erase(v.begin());
            }
            kar_move = 2;
        }
        else if (kar_move == 2)
        {

            if (v.front() < v.back())
            {

                dima += v.back();
                v.pop_back();
            }
            else
            {
                dima += v.front();
                v.erase(v.begin());
            }
            kar_move = 1;
        }
    }

    cout << sereja << " " << dima << endl;
}