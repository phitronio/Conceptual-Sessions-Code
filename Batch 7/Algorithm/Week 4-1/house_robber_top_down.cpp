// Problem Link
// https://www.naukri.com/code360/problems/loot-houses_630510?leftPanelTabValue=PROBLEM


vector<int> dp(1e5+5, -1);

int recur(int idx, vector<int> &houses)
{
	if (idx < 0) return 0;

	if (dp[idx] != -1) return dp[idx];

	int op1 = houses[idx] + recur(idx-2, houses);
	int op2 = recur(idx-1, houses);

	return dp[idx] = max(op1, op2);
	
}

int maxMoneyLooted(vector<int> &houses, int n)
{
	/*
		Write your code here.
		Don't write main().
	 	Don't take input, it is passed as function argument.
	 	Don't print output.
	 	Taking input and printing output is handled automatically.
	*/

	return recur(n-1, houses);

	
}