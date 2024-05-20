/*
||-----------------------||
||  Asif Mohammed Sifat  ||
||  Department of CSE    ||
||   CS Instructor       ||
||Phitron,ProgrammingHero||
||-----------------------||
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    //variable declearation
    // int* a = new int;
    // *a = 5;
    // cout<<*a;

    // delete a;


    //array declear
    int* a = new int[2];
    *(a+0) = 5; //a[0]
    *(a+1) = 10;

    // for(int i=0;i<2;i++){
    //     cout<<a[i]<<" ";
    // }

    // cout<<a[0]<<endl;
    // cout<<a[1]<<endl;
    cout<<*(a+0)<<endl;
    cout<<*(a+1)<<endl;



    return 0;
}
