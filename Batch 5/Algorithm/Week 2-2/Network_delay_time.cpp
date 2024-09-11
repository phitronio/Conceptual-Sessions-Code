// Problem: https://leetcode.com/problems/network-delay-time/description/

class Solution {
public:
    vector<pair<int, int>> v[105];
    int dis[105];

    class cmp
    {
    public:
        bool operator()(pair<int, int> a, pair<int, int> b)
        {
            return a.second > b.second;
        }
    };

    void dijkstra(int src)
    {
        priority_queue<pair<int, int>, vector<pair<int, int>>, cmp> pq;
        pq.push({src, 0});
        dis[src] = 0;
        while (!pq.empty())
        {
            pair<int, int> parent = pq.top();
            pq.pop();
            int node = parent.first;
            int cost = parent.second;
            for (pair<int, int> child : v[node])
            {
                int childNode = child.first;
                int childCost = child.second;
                if (cost + childCost < dis[childNode])
                {
                    dis[childNode] = cost + childCost;
                    pq.push({childNode, dis[childNode]});
                }
            }
        }
    }
    int networkDelayTime(vector<vector<int>>& times, int n, int k) {
        for(auto x : times)
        {
            int s = x[0];
            int d = x[1];
            int w = x[2];
            v[s].push_back({d,w});
        }
        for (int i = 1; i <= n; i++)
        {
            dis[i] = INT_MAX;
        }
        dijkstra(k);

        int ans = 0;
        for(int i=1;i<=n;i++)
        {
            if(dis[i] == INT_MAX)
                return -1;
            ans = max(ans,dis[i]);
        }
        return ans;
    }
};