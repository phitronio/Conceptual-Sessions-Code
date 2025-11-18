#include <bits/stdc++.h>
using namespace std;

int* fun() 
{
    int *p = new int;

    *p = 99;

    return p;
}

int main()
{
    int* x = fun();

    cout<<"1: "<< *x<<endl;

    *x = 199;

    delete x;
    cout<<"2: "<<*x<<endl;

}