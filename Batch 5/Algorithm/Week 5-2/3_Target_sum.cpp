//Problem Link: https://leetcode.com/problems/target-sum/

class Solution {
public:
  int dp[205][20005];
    int checkSum(int n,int sum,vector<int>&arr){
        if(n==0){
            if(sum==0) return true;
            else return false;
        }
        
        if(dp[n][sum]!=-1) return dp[n][sum];
        
        if(arr[n-1]<=sum){
            int pick = checkSum(n-1,sum-arr[n-1],arr);
            int noPick = checkSum(n-1,sum,arr);
            return dp[n][sum] = pick + noPick;
        }else{
            int noPick = checkSum(n-1,sum,arr);
            return dp[n][sum] = noPick;
        }
        
    }


    int findTargetSumWays(vector<int>& nums, int target) {
        int n = nums.size();
        int sum = 0;
        for(int child:nums) sum+=child;

        int s1 = (target+sum)/2;

        if(s1<0) return 0;

        if(target>sum || (target+sum)%2==1) return 0;
        
        memset(dp,-1,sizeof(dp));
        return checkSum(n,s1,nums);


        
    }
};
