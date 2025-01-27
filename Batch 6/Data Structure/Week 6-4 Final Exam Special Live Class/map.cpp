#include <bits/stdc++.h>
using namespace std;

int main()
{

    // map<key_data_type,value_data_type> map_name

    map<char, int> freq;

    string s;
    cin >> s;

    int mx_count = -1;
    char ans;

    for (int i = 0; i < s.size(); i++)
    {
        freq[s[i]]++;

        if (mx_count < freq[s[i]])
        {
            mx_count = freq[s[i]];
            ans = s[i];
        }
    }

    cout << ans << " " << mx_count << endl;
}