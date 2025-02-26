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

void dsu_union(int node1, int node2)
{
    int leader1 = find(node1);
    int leader2 = find(node2);
    if (group_size[leader1] >= group_size[leader2])
    {
        par[leader2] = leader1;
        group_size[leader1] += group_size[leader2];
    }
    else
    {
        par[leader1] = leader2;
        group_size[leader2] += group_size[leader1];
    }
}

int main()
{

    int n, m;
    cin >> n >> m;

    dsu_init(n);

    while (m--)
    {
        int u, v;
        cin >> u >> v;
        int par_u = find(u);
        int par_v = find(v);

        if (par_u != par_v)
        {
            dsu_union(u, v);
        }
    }

    bool all_connected = true;

    for (int node = 1; node <= n; node++)
    {
        int par_1 = find(1);       // 1 er parent
        int par_node = find(node); // i er parent

        if (par_1 != par_node)
        {
            all_connected = false;
        }
    }

    if (all_connected)
        cout << "yes" << endl;
    else
        cout << "No" << endl;
}