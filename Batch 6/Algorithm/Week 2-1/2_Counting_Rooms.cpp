/**
 * All Praise to Allah
 * ---------------------
 * Author: Asif Mohammed Sifat
 * Created: 2025-02-10   22:02:28
 * Source: 
 */
#include<bits/stdc++.h>
using namespace std;


char grid[1005][1005];
int vis[1005][1005];

int dirX[4] = {0,0,1,-1};
int dirY[4] = {1,-1,0,0};
int n,m;

bool isValid(int i,int j){
    if(i<0 || i>=n || j<0 || j>=m || grid[i][j]=='#') return false;
    else return true;
}

void dfs(int x,int y){
    vis[x][y] = 1;

    for(int i=0;i<4;i++){
        int newX = x + dirX[i];
        int newY = y + dirY[i];

        if(isValid(newX,newY) && vis[newX][newY]==0){
            dfs(newX,newY);
        }
    }
}
int main(){
    
    cin>>n>>m;

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>grid[i][j];
            vis[i][j] = 0;
        }
    }

    int cnt = 0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
           if(grid[i][j]=='.' && vis[i][j]==0){
                dfs(i,j);
                cnt++;
           }
        }
    }

    cout<<cnt<<endl;


    
    return 0;
}
