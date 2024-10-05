//Problem Link: https://leetcode.com/problems/partition-equal-subset-sum/description/
class Solution {
public:
    int dp[205][20005];
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

    bool canPartition(vector<int>& nums) {

        int n = nums.size();
        memset(dp,-1,sizeof(dp));
        

        int sum = 0;
        for(int child: nums) sum+=child;

        if(sum%2==1) return false;
        int target = sum/2;

        return checkSum(n,target,nums);
        
    }
};
