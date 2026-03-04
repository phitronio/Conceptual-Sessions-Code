#include <bits/stdc++.h>
using namespace std;
int par[1005];
int group_size[1005];

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
    memset(par, -1, sizeof(par));
    memset(group_size, 1, sizeof(group_size));

    int n, e;
    cin >> n >> e;

    while (e--)
    {
        int a, b;
        cin >> a >> b;
        int leaderA = find(a);
        int leaderB = find(b);

        // if (leaderA == leaderB)
        // {
        //     // connected
        // }
        // else
        // {
        //     dsu_union(a, b);
        // }
        if (leaderA != leaderB)
        {
            dsu_union(a, b);
        }
    }

    bool flag = true; // connected

    int lead_n = find(n);
    for (int i = 1; i <= n; i++)
    {
        int lead_node = find(i);
        if (lead_n != lead_node)
        {
            flag = false;
        }
    }

    if (flag == true)
    {
        cout << "All nodes connected" << endl;
    }
    else
    {
        cout << "Disconnected graph" << endl;
    }

    return 0;
}