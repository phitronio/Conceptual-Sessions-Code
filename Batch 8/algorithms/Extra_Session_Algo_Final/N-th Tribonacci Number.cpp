// https://leetcode.com/problems/n-th-tribonacci-number/

class Solution {
public:

    // int recur(int n, vector<int> &dp)
    // {
    //     if (n == 0) return 0;
    //     if (n == 1) return 1;
    //     if (n == 2) return 1;

    //     if (dp[n] != -1) return dp[n];

    //     return dp[n] = recur(n-1, dp) + recur(n-2, dp) + recur (n-3, dp);
    // }

    int tribonacci(int n) {
        
        // vector<int> dp(38, -1);
        // return recur(n, dp);

        vector<int> dp(n+1);

        if (n==0) return 0;
        if (n==1) return 1;
        if (n==2) return 1;

        dp[0] = 0;
        dp[1] = 1;
        dp[2] = 1;

        for(int i=3; i<=n; i++) {
            dp[i] = dp[i-1] + dp[i-2] + dp[i-3];
        }

        return dp[n];


    }
};
