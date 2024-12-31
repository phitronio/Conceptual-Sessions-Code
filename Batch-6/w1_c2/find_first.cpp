#include<bits/stdc++.h>
using namespace std;
//Find First occurance of target value
int main(){
    int n, target;

    cin >> n;

    vector<int>a(n);

    for(int i=0; i<n; i++){
        cin >> a[i];
    }

    cin >> target;
    //first occurance;//log(n)
    int l=0, r=n-1;
    int first=-1;
    while(l <= r){
        int mid = (l+r)/2;

        if(a[mid] == target){
            first = mid;
            r = mid -1;
            
        }
        else if(a[mid] > target){
            r = mid -1;
        }
        else{
            l = mid + 1;
        }

    }
    //last occurance;log(n)
     l=0, r=n-1;
    int last=-1;
    while(l <= r){
        int mid = (l+r)/2;

        if(a[mid] == target){
            last = mid;
            l = mid + 1;
            
        }
        else if(a[mid] > target){
            r = mid -1;
        }
        else{
            l = mid + 1;
        }

    }

    cout << first << " "<<  last << endl;
    cout << "kotobar ace: " << last-first+1 << endl;
}