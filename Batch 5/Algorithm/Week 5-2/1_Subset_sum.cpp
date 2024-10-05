//Problem Link: https://practice.geeksforgeeks.org/problems/subset-sum-problem-1611555638/1?utm_source=gfg&utm_medium=article&utm_campaign=bottom_sticky_on_article

//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function template for C++

class Solution{   
public:
    int dp[105][10005];
    bool checkSum(int n,int sum,vector<int>&arr){
        if(n==0){
            if(sum==0) return true;
            else return false;
        }
        
        if(dp[n][sum]!=-1) return dp[n][sum];
        
        if(arr[n-1]<=sum){
            bool pick = checkSum(n-1,sum-arr[n-1],arr);
            bool noPick = checkSum(n-1,sum,arr);
            return dp[n][sum] = pick || noPick;
        }else{
            bool noPick = checkSum(n-1,sum,arr);
            return dp[n][sum] = noPick;
        }
        
    }
    
    bool isSubsetSum(vector<int>arr, int sum){
        // code here 
        int n = arr.size();
        memset(dp,-1,sizeof(dp));
        return checkSum(n,sum,arr);
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N, sum;
        cin >> N;
        vector<int> arr(N);
        for(int i = 0; i < N; i++){
            cin >> arr[i];
        }
        cin >> sum;
        
        Solution ob;
        cout << ob.isSubsetSum(arr, sum) << endl;
    }
    return 0; 
} 

// } Driver Code Ends
