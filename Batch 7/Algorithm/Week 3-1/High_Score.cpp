//  https://cses.fi/problemset/task/1673
 
 #include <bits/stdc++.h>
 #define ll long long int
 #define all(x) x.begin(), x.end()
 #define nl '\n'
 #define fastIO() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
 using namespace std;
 
 class Edge
 {
    public: 
    int u, v, c;
    Edge(int u, int v, int c) {
        this->v = v;
        this->u = u; 
        this->c = c;
    }
 };


 int main()
 {
     fastIO();
     int n, m;
     cin>>n>>m;

     vector<Edge> edlist;
     ll pinf = 1e17;
     ll ninf = -1 * pinf;

     vector<ll> dis(n+1, pinf);
     dis[1] = 0;

     for(int i=1; i<=m; i++) 
     {
        int a, b, c;
        cin>>a>>b>>c;
        c = -1 * c;
        edlist.push_back(Edge(a, b, c));
     }

     for(int i=1; i<n; i++)
     {
        for(auto [a, b, c] : edlist)
        {
            if (dis[a] == pinf) continue;
            dis[b] = min(dis[b], dis[a]+c);
        }
     }

     for(int i = 1; i<=n; i++)
     {
        for(auto [a, b, c] : edlist)
        {
            if (dis[a] == pinf) continue;
            if(dis[a] + c < dis[b]) {
                dis[b] = ninf;
            }
        }
     }

     if(dis[n] == ninf) {
        cout<<-1<<nl;
     } else {
        cout<<dis[n]*-1<<nl;
     }
     
     return 0;
 }