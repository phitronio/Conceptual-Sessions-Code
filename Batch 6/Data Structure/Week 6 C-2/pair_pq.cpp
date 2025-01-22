#include <bits/stdc++.h>
using namespace std;

class comparator
{
public:
    bool operator()(pair<int, int> a, pair<int, int> b)
    {

        if (a.second < b.second)
        {
            return true;
            // true return korle swap
        }
        else
            return false;
    }
};

int main()
{
    // default
    priority_queue<pair<int, int>, vector<pair<int, int>>, comparator> pq;

    for (int i = 0; i < 5; i++)
    {
        int x, y;
        cin >> x >> y;
        pq.push({x, y});
    }

    while (!pq.empty())
    {
        pair<int, int> pr = pq.top();
        cout << pr.first << " " << pr.second << endl;
        pq.pop();
    }
}