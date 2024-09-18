#include<bits/stdc++.h>
using namespace std;
const int n = 10005;
int par[n];
int sz[n];
void dsu_init(int n)
{
    for(int i=0;i<n;i++)
    {
        par[i] = -1;
        sz[i] = 1;
    }
}
int dsu_find(int node)
{
    if(par[node] == -1)
        return node;
    par[node] = dsu_find(par[node]);
    return par[node];
}
void union_by_size(int nodeA, int nodeB)
{
    int leaderA = dsu_find(nodeA);
    int leaderB = dsu_find(nodeB);
    if(leaderA == leaderB) return;
    if(sz[leaderA] > sz[leaderB])
    {
        par[leaderB] = leaderA;
        sz[leaderA] += sz[leaderB];
    }
    else
    {
        par[leaderA] = leaderB;
        sz[leaderB] += sz[leaderA];
    }
}
int main()
{
    int n,m;
    cin >> n >> m;
    dsu_init(n);
    while(m--)
    {
        int a,b;
        cin >> a >> b;
        union_by_size(a,b);
    }
    for(int i=1;i<n;i++)
    {
        cout << i << " " << par[i] << endl;
    }
}