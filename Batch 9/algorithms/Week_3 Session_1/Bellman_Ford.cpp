class Solution {
  public:
    vector<int> bellmanFord(int V, vector<vector<int>>& edges, int src) {
        // Code here
        
        int e = edges.size();
        vector<int> dist(V, 1e8);
        dist[src] = 0;
        
        for(int i=1; i<V; i++)
        {
            for( auto vec : edges)
            {
                int u, v, w;
                u = vec[0];
                v = vec[1];
                w = vec[2];
                
                if (dist[u] != 1e8 && dist[u] + w < dist[v]) {
                    dist[v] = dist[u] + w;
                }
                
            }
        }
        
        bool cycle = false;
        for( auto vec : edges)
            {
                int u, v, w;
                u = vec[0];
                v = vec[1];
                w = vec[2];
                
                if (dist[u] != 1e8 && dist[u] + w < dist[v]) {
                    cycle = true;
                }
                
            }
            
        if (cycle) return {-1};
        return dist;
        
        
        
    }
};
