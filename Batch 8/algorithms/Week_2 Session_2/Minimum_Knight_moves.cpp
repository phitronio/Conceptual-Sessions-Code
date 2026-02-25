#include<bits/stdc++.h>
using namespace std;
char grid[105][105];
bool vis[105][105];
int level[105][105];
vector<pair<int,int>> d = {{-1,2},{1,2},{1,-2},{-1,-2},{2,1},{2,-1},{-2,1},{-2,-1}};
int n,m;

bool valid(int i, int j)
{
    if(i<1 || i>n || j<1 || j>m)
        return false;
    return true;
}

void bfs(int si, int sj)
{
    queue<pair<int,int>> q;
    q.push({si,sj});
    vis[si][sj] = true;
    level[si][sj] = 0;
    while(!q.empty())
    {
        pair<int,int> par = q.front();
        q.pop();
        int par_i = par.first;
        int par_j = par.second;

        for(int i=0;i<8;i++)
        {
            int ci = par_i + d[i].first;
            int cj = par_j + d[i].second;
            if(valid(ci,cj) && !vis[ci][cj])
            {
                q.push({ci,cj});
                vis[ci][cj] = true;
                level[ci][cj] = level[par_i][par_j] + 1;
            }
        }
    }
}

int main()
{
    n = 8, m = 8;
    int t;
    cin >> t;
    while(t--)
    {
        int si,sj,di,dj;
        string s,d;
        cin >> s >> d;
        si = s[1] - '0';
        sj = s[0] - 'a' + 1;
        di = d[1] - '0';
        dj = d[0] - 'a' + 1;
        memset(vis,false,sizeof(vis));
        memset(level,-1,sizeof(level));
        bfs(si,sj);
        cout << level[di][dj] << endl;
    }
    return 0;
}