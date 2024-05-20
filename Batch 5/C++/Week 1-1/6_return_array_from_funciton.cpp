
#include<bits/stdc++.h>
using namespace std;

int** fn(){
    int* b = new int[2];
    b[0] = 5;
    b[1] = 10;
    return &b;
}

int main()
{
    int** a = fn();
    cout<<a;

    return 0;
}
