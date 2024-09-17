/**
 * All Praise to Allah
 * ---------------------
 * Author: Asif Mohammed Sifat
 * Created: 2024-09-17   17:22:33
 * Source: 
 */
#include<bits/stdc++.h>
#define ll long long int 
#define ull unsigned long long int 
#define nl '\n' 
using namespace std;

int parent[105];
int level[105];

void initialize(int sz){
    
    for(int i=0;i<=sz;i++){
        parent[i] = -1; 
        level[i] = 0;       
    }
}
int flag = false;
int Find(int node){
    if(flag) cout<<"Calling Node "<<node<<endl;
    if(parent[node]==-1) return node;
    else{
        int leader = Find(parent[node]);
        parent[node] = leader;
        return leader;
    }
}

void Union(int p,int q){
    int parentP = Find(p);
    int parentQ = Find(q);

    parent[parentQ] = parentP;
}
void UnionRank(int p,int q){
    int parentP = Find(p);
    int parentQ = Find(q);
    
    if(level[parentP]>level[parentQ]){
        parent[parentQ] = parentP;
    }
    else if(level[parentP]<level[parentQ]){
        parent[parentP] = parentQ;
    }
    else{
        parent[parentQ] = parentP;
        level[parentP]++;
    }
}
                    
int main(){
    initialize(100);

    UnionRank(4,5);
    UnionRank(3,4);
    UnionRank(2,3);
    UnionRank(1,2);    

    flag = true;
    cout<<Find(5)<<nl;
    cout<<Find(4)<<nl;

    return 0;
}



