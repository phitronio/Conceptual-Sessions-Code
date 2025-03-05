#include <bits/stdc++.h>
using namespace std;
const int N = 100000 + 5;
int dp[N];
/* bool canReach(int start, int target) //
{
    if (start == target)
        return true;
    if (start > target)
        return false;
    // dp[15]=false/0;
    // dp[16]=true/1;
    if (dp[start] != -1)
        return dp[start];
    // int l = canReach(start + 5, target);
    // int r = canReach(start * 4, target);
    dp[start] = canReach(start + 5, target) || canReach(start * 4, target); // recursive call
    return dp[start];
} */
bool canReach(int target) //
{
    if (1 == target)
        return true;
        
    if (1 > target)
        return false;
    
    if (target >= N) // Prevent out-of-bounds access
        return false;

    // dp[15]=false/0;
    // dp[16]=true/1;
    if (dp[target] != -1 && target > 0)
        return dp[target]; // 1/0

    bool flag = false;
    if (target % 4 == 0)
    {
        flag = canReach(target / 4);
    }
    bool flag2 = false;
    if (target > 5)
    {
        flag2 = canReach(target - 5);
    }
    dp[target] = flag2 || flag; // recursive call
    return dp[target];
}

int main()
{
    int n;
    cin >> n;
    memset(dp, -1, sizeof(dp));
    if (canReach(n))
    {
        cout << "YES" << endl; // YES
    }
    else
    {
        cout << "NO" << endl; // NO
    }

    return 0;
}