class Solution {
public:
    int networkDelayTime(vector<vector<int>>& times, int n, int k) {
        int dist[105][105];

        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                dist[i][j] = 1e9;
            }
        }

        for (auto val : times) {
            int u = val[0], v = val[1], w = val[2];
            dist[u][v] = w; 
        }

        for (int i = 1; i <= n; i++) {
            dist[i][i] = 0;
        }

        for (int k = 1; k <= n; k++) {
            for (int i = 1; i <= n; i++) {
                for (int j = 1; j <= n; j++) {
                    if (dist[i][k] < 1e9 && dist[k][j] < 1e9) {
                        dist[i][j] = min(dist[i][j], dist[i][k] + dist[k][j]);
                    }
                }
            }
        }

        int res = 0;
        for (int i = 1; i <= n; i++) {
            if (dist[k][i] == 1e9) return -1; 
            res = max(res, dist[k][i]);
        }

        return res;
    }
};
