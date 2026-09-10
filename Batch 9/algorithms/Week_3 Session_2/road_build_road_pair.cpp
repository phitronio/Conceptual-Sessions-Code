#include <bits/stdc++.h>
using namespace std;
int par[100005];
int group_size[100005];

// node's leader return
int find(int node) // O(logN)
{
    if (par[node] == -1)
        return node;
    int leader = find(par[node]);
    par[node] = leader;
    return leader;
}

// 2 nodes are not connected then connect using dsu_union
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
    // bool cycle = false;
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
    vector<pair<int, int>> leadersListPair;
    int first_node = n;
    for (int i = 1; i <= n; i++)
    {
        int initialLeader = find(first_node);
        int nodeLeader = find(i);
        if (nodeLeader != initialLeader)
        {
            leadersListPair.push_back({initialLeader, nodeLeader});
            dsu_union(first_node, i);
        }
    }
    cout << leadersListPair.size() << endl;
    for (auto p : leadersListPair)
    {
        cout << p.first << " " << p.second << endl;
    }

    return 0;
}