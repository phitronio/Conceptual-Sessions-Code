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

    // recursive call
    fun(n+1);

    
    // task
    cout<<n<<endl;
}
    

int main()
{
    fun(1);
    return 0;
}
