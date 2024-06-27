#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v = {10,20,30,40,50};

    v.erase(v.begin()+1, v.begin()+4);

    for(int i=0;i<v.size();i++)
    {
        cout << v[i] << " ";
    }


    // for single value erasing
    // vector.erase(pos)
    // for multiple value erasing
    // vector.erase(start, end)
}