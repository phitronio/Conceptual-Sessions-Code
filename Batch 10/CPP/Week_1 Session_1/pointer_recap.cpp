#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;

int *ptr;
int *ptr2;

void fun()
{
    int a = 100;
    ptr = &a;

    cout<<"fun: "<<a<<endl;
    cout<<&a<<endl;
    cout<<ptr<<endl;
    cout<<*ptr<<endl;
}

void f2()
{
    int* b = new int(20);
    cout<<b<<endl;
    cout<<&b<<endl;
    cout<<*b<<endl;
    ptr2 = b;
    cout<<"ptr2: "<<*ptr2<<endl;
}

int main()
{
    fastIO();

    f2();
    cout<<"------"<<endl;
    cout<<*ptr2<<endl;
    // fun();
    // cout<<"-----------"<<endl;

    // cout<<*ptr<<endl;



    // int x = 10;

    // cout<<x<<endl;
    // cout<<&x<<endl;
    // cout<<*(&x)<<endl;

    // *(&x) = 20;
    // cout<<x<<endl;

    
    return 0;
}