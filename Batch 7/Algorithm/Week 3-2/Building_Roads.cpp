#include <bits/stdc++.h>
using namespace std;
int par[100005];
int group_size[100005];

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
    // memset(par, -1, sizeof(par));
    // memset(group_size, 1, sizeof(group_size));

    for (int i = 0; i < 100005; i++)
    {
        par[i] = -1;
        group_size[i] = 1;
    }

    int n, e;
    cin >> n >> e;

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

    int cnt = 0;
    vector<int> v;
    for (int i = 2; i <= n; i++)
    {
        int leader_1 = find(1);
        int leader_node = find(i);
        if (leader_1 != leader_node)
        {
            cnt++;
            dsu_union(leader_1, leader_node);
            v.push_back(leader_node);
        }
    }
    cout << cnt << endl;

    for (int val : v)
    {
        cout << 1 << " " << val << endl;
    }
    return 0;
}