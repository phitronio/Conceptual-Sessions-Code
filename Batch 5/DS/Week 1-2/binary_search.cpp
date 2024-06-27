#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin >> a[i];
    }
    int val;
    cin >> val;
    bool is_duplicate = false;
    int l=0,r=n-1;

    while(l<=r)
    {
        int mid = (l+r)/2;
        if(a[mid]==val)
        {
            if(mid!=0 && a[mid-1]==val || mid!=n-1 && a[mid+1]==val)
                is_duplicate = true;
            break;
        }
        else if(a[mid] > val)
        {
            r = mid-1;
        }
        else
        {
            l = mid+1;
        }
    }

    if(is_duplicate)
        cout << "true";
    else
        cout << "false";
}



// unsorted array -> search 
// op1 -> linear search   --- O(N)
// op2 -> sort          --- O(NlogN)
//        binary search   --- O(logN)
// op2 -> O(NlogN)

