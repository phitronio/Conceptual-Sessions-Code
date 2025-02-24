class Solution {
  public:
    void shortestDistance(vector<vector<int>>& mat) {
        // Code here
        int n = mat.size();
        
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(mat[i][j]==-1) mat[i][j] = 1e9;
                if(i==j) mat[i][j] = 0;
            }
        }
        
        for(int k=0;k<n;k++){
            for(int i=0;i<n;i++){
                for(int j=0;j<n;j++){
                    // if(mat[i][k]+mat[k][j]<mat[i][j]){
                    //     mat[i][j] = mat[i][k]+mat[k][j];
                    // }
                   mat[i][j] = min(mat[i][k]+mat[k][j], mat[i][j]);
                }
            }
        }
        
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(mat[i][j]==1e9) mat[i][j] = -1;
            }
        }
        
        
    }
};
