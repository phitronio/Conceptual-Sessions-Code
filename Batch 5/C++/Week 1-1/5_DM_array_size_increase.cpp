#include<bits/stdc++.h>
using namespace std;
int main(){
    // int a[2];
    // a[0] = 5;
    // a[1] = 10;

    // int b[5];

    // for(int i=0;i<2;i++){
    //     b[i] = a[i];
    // }
    // b[2] = 15;
    // b[3] = 20;
    // b[4] = 25;

    // for(int i=0;i<5;i++){
    //     cout<<b[i]<<" ";
    // }

    int* a = new int[2];
    a[0] = 5;
    a[1] = 10;

    int* b = new int[5];

    for(int i=0;i<2;i++){
        b[i] = a[i];
    }
    b[2] = 15;
    b[3] = 20;
    b[4] = 25;

    for(int i=0;i<5;i++){
        cout<<b[i]<<" ";
    }

    delete [] a;
      
      
    return 0;
}
