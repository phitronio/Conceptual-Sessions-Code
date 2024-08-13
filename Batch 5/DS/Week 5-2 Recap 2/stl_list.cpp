#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<int> l = {10,20,30,40,40,40,50};
    l.remove(10);
    for(int val : l)
        cout << val << endl;
}