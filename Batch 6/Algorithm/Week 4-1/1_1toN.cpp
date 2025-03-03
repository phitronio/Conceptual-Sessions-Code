/**
 * All Praise to Allah
 * ---------------------
 * Author: Asif Mohammed Sifat
 * Created: 2025-03-03   21:33:47
 * Source:
 */
#include <bits/stdc++.h>
using namespace std;

void fun(int n){
    // base case
    if(n==4) return;
    // task
    cout<<n<<endl;
    // recursive call
    fun(n++);
}

int main()
{
    fun(1);
    return 0;
}
