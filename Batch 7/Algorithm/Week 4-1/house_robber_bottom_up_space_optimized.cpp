// Problem Link
// https://www.naukri.com/code360/problems/loot-houses_630510?leftPanelTabValue=PROBLEM

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
	

	for(int i=1; i<n; i++) {
		if (i==1) {
			houses[i] = max(houses[1], houses[0]);
		}
		int op1 = houses[i] + houses[i-2];
		int op2 = houses[i-1];
		houses[i] = max(op1, op2);
	}

	return houses[n-1];


}