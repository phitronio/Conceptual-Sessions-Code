// https://cses.fi/problemset/task/1673/

#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

class Edge
{
public:
    int u, v, c;
    Edge(int u, int v, int c)
    {
        this->u = u;
        this->v = v;
        this->c = c;
    }
};

int main()
{
    fastIO();

    int n, m;
    cin >> n >> m;

    vector<Edge> edlist;

    for (int i = 1; i <= m; i++)
    {
        int a, b, c;
        cin >> a >> b >> c;

        c = -1 * c;

        edlist.push_back(Edge(a, b, c));
    }

    ll pinf = 1e17;
    ll ninf = -1 * pinf;

    vector<ll> dist(n + 1, pinf);

    dist[1] = 0;

    for (int i = 1; i < n; i++)
    {
        for(auto [a, b, c] : edlist)
        {
            if (dist[a] == pinf) continue;
            dist[b] = min(dist[b], dist[a]+c);

        }
    }

    for(int i=1; i<=n; i++)
    {
        for(auto [a,b,c] : edlist)
        {
            if (dist[a] == pinf) continue;
            if (dist[a]+c < dist[b]) {
                dist[b] = ninf;
            }
        }
    }


    if (dist[n] == ninf) {
        cout<<-1<<endl;
    } else {
        cout<<dist[n] * -1<<endl;
    }

    return 0;
}
