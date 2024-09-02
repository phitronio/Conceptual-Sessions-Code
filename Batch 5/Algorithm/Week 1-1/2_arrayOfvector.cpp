/**
 * All Praise to Allah
 * ---------------------
 * Author: Asif Mohammed Sifat
 * Created: 2024-09-02   17:07:09
 * Source: 
 */
#include<bits/stdc++.h>
#define ll long long int 
#define ull unsigned long long int 
#define nl '\n' 
using namespace std;


/*
3 3

0 1
0 2
1 2

*/

vector<int> arr[100];

int main(){

    int n,e;
    cin>>n>>e;

    while(e--){
        int u,v;
        cin>>u>>v;

        arr[u].push_back(v);
        arr[v].push_back(u);

    }


    for(int i=0;i<n;i++){
        cout<<i<<"-->";
        for(int j=0;j<arr[i].size();j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }


    
    return 0;
}
