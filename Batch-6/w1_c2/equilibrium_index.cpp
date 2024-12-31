#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    vector<int>a(n);

    int totalSum=0;

    for(int i=0; i<n; i++){
        cin >> a[i];
        totalSum += a[i];
    }

    vector<int>pref(n);

    pref[0] = a[0];

    for(int i=1; i<n; i++){
        pref[i] = pref[i-1] + a[i];
    }

    int ans=-1;

    for(int i=0; i<n; i++){
        int rightSum = totalSum - pref[i];

        if(pref[i] == rightSum){
            ans = i;
            break;
        }
    }

    cout << ans << endl;

}