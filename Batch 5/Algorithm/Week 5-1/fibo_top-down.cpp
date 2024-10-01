#include<bits/stdc++.h>
using namespace std;
int dp[100005];
int fibo(int n)
{
    if(n<2)
        return n;
    if(dp[n] != -1)
        return dp[n];
    return dp[n] = fibo(n-1) + fibo(n-2);
}

int main()
{
    memset(dp, -1, sizeof(dp));
    int n;
    cin >> n;
    cout << fibo(n) << endl;
}