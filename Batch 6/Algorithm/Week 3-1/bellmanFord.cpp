class Solution {
  public:
    /*  Function to implement Bellman Ford
     *   edges: vector of vectors which represents the graph
     *   src: source vertex
     *   V: number of vertices
     */
    vector<int> bellmanFord(int V, vector<vector<int>>& edges, int src) {
        // Code here
        int e = edges.size();
        vector<int> dis(V,1e8);
        dis[src] = 0;
        
        for(int j=0;j<V-1;j++){
            for(int i=0;i<e;i++){
                int u = edges[i][0];
                int v = edges[i][1];
                int w = edges[i][2];
                
                if(dis[u]!=1e8 && dis[u]+w<dis[v]){
                    dis[v] = dis[u] + w;
                }
             }
        }
        
         for(int i=0;i<e;i++){
                int u = edges[i][0];
                int v = edges[i][1];
                int w = edges[i][2];
                
                if(dis[u]!=1e8 && dis[u]+w<dis[v]){
                    return {-1};
                }
        }
        return dis;
    }
};
