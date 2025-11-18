#include <bits/stdc++.h>
using namespace std;

int* fun()
{
    int* arr = new int[3];
    arr[0] = 10;
    arr[1] = 20; 
    arr[2] = 30;
    cout<<"fun: ";
    for(int i=0; i<3; i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    return arr;

}
int main()
{
    int* marr = fun();

    cout<<"main : ";
    for(int i=0; i<3; i++) {
        cout<<marr[i]<<" ";
    }
    
    
    return 0;
}