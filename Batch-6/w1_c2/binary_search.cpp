#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, target;

    cin >> n;

    vector<int>a(n);

    for(int i=0; i<n; i++){
        cin >> a[i];
    }

    cin >> target;

    int l=0, r=n-1;

    while(l <= r){
        int mid = (l+r)/2;

        if(a[mid] == target){
            cout << "khuje paici index no: " << mid  << endl;
            return 0;
        }
        else if(a[mid] > target){
            r = mid -1;
        }
        else{
            l = mid + 1;
        }

    }


    cout << "khuje pai ny" << endl;
}