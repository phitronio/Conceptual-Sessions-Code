/**
 * All Praise to Allah
 * ---------------------
 * Author: Asif Mohammed Sifat
 * Created: 2024-09-17   22:13:00
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

int Find(int node){
    cout<<"Calling Node "<<node<<endl;
    if(parent[node]==-1){
        return node;
    }else{
        int leader = Find(parent[node]);
        parent[node] = leader;
        return leader;
    }


}

void Union(int p,int q){
    int parentP = Find(p); // 1
    int parentQ = Find(q); // 2

    parent[parentQ] = parentP;
}
void UnionRank(int p,int q){
    int parentP = Find(p); // 1
    int parentQ = Find(q); // 2

    if(level[parentP]>level[parentQ]){
        parent[parentQ] = parentP;
    }
    else if(level[parentP]<level[parentQ]){
        parent[parentP] = parentQ;
    }else{
        parent[parentQ] = parentP;
        level[parentP]++;
    }
}
                    
int main(){
    initialize(7);

    UnionRank(6,7);
    UnionRank(5,6);
    UnionRank(4,5);
    UnionRank(3,4);
    UnionRank(2,3);
    UnionRank(1,2);

    cout<<"++++++++++++++++++++++++++++++++++++"<<endl;

    // cout<<Find(2)<<endl;
    // cout<<Find(4)<<endl;
    cout<<Find(7)<<endl;    
    cout<<"##############################"<<nl;
    cout<<Find(6)<<endl;    
    cout<<"##############################"<<endl;
    cout<<Find(5)<<endl;    
    cout<<"##############################"<<endl;

    cout<<Find(4)<<endl;
    cout<<"##############################"<<endl;

    cout<<Find(3)<<endl;
    cout<<"##############################"<<endl;

    cout<<Find(2)<<endl;
    cout<<"##############################"<<endl;

    cout<<Find(1)<<endl;
    cout<<"##############################"<<endl;
              
    return 0;
}




// Find and Union -> naive + optimized verison
