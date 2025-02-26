#include <bits/stdc++.h>
using namespace std;

int par[100000 + 5];
int group_size[100000 + 5];

void dsu_init(int n)
{
    for (int i = 1; i <= n; i++)
    {
        par[i] = -1;
        group_size[i] = 1;
    }
}

int find(int node) // O(logN)
{
    if (par[node] == -1)
        return node;
    int leader = find(par[node]);
    par[node] = leader;
    return leader;
}

int mx_group_size;

void dsu_union(int node1, int node2)
{
    int leader1 = find(node1);
    int leader2 = find(node2);
    if (group_size[leader1] >= group_size[leader2])
    {
        par[leader2] = leader1;
        group_size[leader1] += group_size[leader2];
        mx_group_size = max(mx_group_size, group_size[leader1]);
    }
    else
    {
        par[leader1] = leader2;
        group_size[leader2] += group_size[leader1];
        mx_group_size = max(mx_group_size, group_size[leader2]);
    }
}

int main()
{

    int n, m;
    cin >> n >> m;

    dsu_init(n);

    int components = n;

    mx_group_size = 1;

    while (m--)
    {
        int u, v;
        cin >> u >> v;
        int par_u = find(u);
        int par_v = find(v);

        if (par_u != par_v)
        {

            dsu_union(u, v);
            components--;
        }

        cout << components << " " << mx_group_size << endl;
    }
}