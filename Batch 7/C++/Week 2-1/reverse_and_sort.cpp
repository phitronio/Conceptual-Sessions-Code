#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s1;
    cin >> s1;

    // reverse(s1.begin(), s1.end());

    sort(s1.begin(), s1.end()); // lexicographically sort hoise

    cout << s1 << endl;
}