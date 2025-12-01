#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;


int main()
{
    fastIO();
    string str1, x;
    getline(cin, str1);
    cin>>x;

    stringstream ss(str1);
    string word;

    int count = 0;

    while(ss >> word)
    {
        if (word == x) count++;
    }

    cout<<count<<endl;



    
    return 0;
}