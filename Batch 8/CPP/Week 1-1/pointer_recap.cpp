#include <bits/stdc++.h>
using namespace std;

int* fun()
{
    int a = 22;
    int *b = &a;

    *b = 33;

    return &a;
   
}
int main()
{
    
    int arr[3];
    arr[0] = 10;
    arr[1] = 20;
    arr[2] = 30;

    *(&arr[0]) = 99;
    *(&arr[2]) = 888;

    for(int i=0; i<3; i++) {
        cout<<arr[i]<<endl;
    }

    cout<<&arr[0]<<endl;
    cout<<arr<<endl;
    
    return 0;
}