// https://www.geeksforgeeks.org/problems/implementing-floyd-warshall2042/1


// User function template for C++

class Solution {
  public:
    void floydWarshall(vector<vector<int>> &dist) {
        // Code here
        int n = dist.size();
        int pinf = 1e8;
        
        for(int k=0; k<n; k++)
        {
            for(int i=0; i<n; i++) {
                
                for(int j=0; j<n; j++)
                {
                    if(dist[i][k] != pinf && dist[k][j] != pinf && dist[i][k] + dist[k][j] < dist[i][j]) {
                        dist[i][j] = dist[i][k] + dist[k][j];
                    }
                }
            }
        }
        
        
    }
};