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
    bool cycle = false;
    while (e--)
    {
        int a, b;
        cin >> a >> b;
        int leaderA = find(a);
        int leaderB = find(b);

        if (leaderA != leaderB)
        {
            dsu_union(a, b);
        }
    }

    bool flag = true;

    int leader_1 = find(1);

    for (int i = 1; i <= 10; i++)
    {
        int leader_node = find(i);
        if (leader_1 != leader_node)
        {
            flag = false;
        }
    }

    if (flag == true)
    {
        cout << "Same component" << endl;
    }
    else
    {
        cout << "Not same component" << endl;
    }

    return 0;
}