/*
||-----------------------||
||  All Praise to Allah  ||
||-----------------------||
||  Asif Mohammed Sifat  ||
||  Department of CSE    ||
||   CS Instructor       ||
||Phitron,ProgrammingHero||
||-----------------------||
*/
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
#define nl '\n'
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long int n;
    cin >> n;
    long long int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }
    
    for (int i = 1; i <= n; i++)
    {
       for (int i = 1; i <= n; i++)
        {
            sum += i;
        }
    }

    
    sum = (n*(n+1))/2;
    cout<<sum<<endl;

    return 0;
}
