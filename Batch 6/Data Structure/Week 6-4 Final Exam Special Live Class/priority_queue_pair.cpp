#include <bits/stdc++.h>
using namespace std;

// always empty kina check korben , removal korar time e

class comparator
{
public:
    bool operator()(pair<int, int> &a, pair<int, int> &b)
    {
        // jodi swap korte chai tokhon true return korbe
        if (a.first > b.first)
        {
            return true;
        }
        else
            return false;
    }
};

int main()
{

    // priority_queue<data_type> name ;

    priority_queue<pair<int, int>, vector<pair<int, int>>, comparator> pq;

    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> y;
        pq.push({x, y});
    }

    while (!pq.empty())
    {
        cout << pq.top().first << " " << pq.top().second << endl;
        pq.pop();
    }
}