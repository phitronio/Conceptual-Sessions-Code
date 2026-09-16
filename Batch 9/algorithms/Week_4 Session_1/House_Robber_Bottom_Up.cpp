// Problem link: https://www.naukri.com/code360/problems/loot-houses_630510?leftPanelTabValue=PROBLEM

int maxMoneyLooted(vector<int> &houses, int n)
{
	/*
		Write your code here.
		Don't write main().
	 	Don't take input, it is passed as function argument.
	 	Don't print output.
	 	Taking input and printing output is handled automatically.
	*/

	if (n==0) return 0;

	vector<int> dp(n+1);

	dp[0] = houses[0];

	for(int i=1; i<n; i++)
	{
		if (i==1) {
			dp[i] = max(houses[0], houses[1]);
		} else {
			int op1 = houses[i] + dp[i-2];
			int op2 = dp[i-1];
			dp[i] = max (op1, op2);
		}
	}

	return dp[n-1];

}
