// Problem link: https://leetcode.com/problems/climbing-stairs/description/
class Solution {
public:
    int dp[50];
    int fibo(int n)
    {
        if(n<=2)
            return n;
        if(dp[n] != -1)
            return dp[n];
        return dp[n] = fibo(n-1) + fibo(n-2);
    }
    int climbStairs(int n) {
        memset(dp, -1, sizeof(dp));
        return fibo(n);
    }
};