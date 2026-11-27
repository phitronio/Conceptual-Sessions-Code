#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;

int* fun()
{
    int n;
    cin>>n;

    int * arr = new int[n];
    for(int i=0; i<n; i++) {
        cin>>arr[i];
    }

    for(int i=0; i<n; i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    cout<<*(&arr)<<endl;
    cout<<*arr<<endl;
    return arr;
}

int main()
{
    fastIO();

    int* b  = fun();

    for(int i=0; i<5; i++) {
        cout<<b[i]<<" ";
    }
    
    
    return 0;
}