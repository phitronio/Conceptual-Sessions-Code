#include <bits/stdc++.h>
using namespace std;
int main()
{
    // string s;
    // cin>>s;
    // getline(cin, s);
    // sort(s.begin(), s.end());
    // cout<<s<<endl;

    char str[100000];
    cin.getline(str, 1000);
    int len = strlen(str);
    // selection sort - O(n*n)
    // for (int i = 0; i < len; i++)
    // {
    //     for (int j = i + 1; j < len; j++)
    //     {
    //         if (str[i] < str[j])
    //         {
    //         }
    //         else
    //         {
    //             swap(str[i], str[j]);
    //         }
    //     }
    // }

    // built in sort function - TC O(n * log n)
    // sort(str, str + len);

    // cout<<str<<endl;
    // for (int i = 0; i < len; i++)
    // {
    //     if (str[i] == ' ')
    //     {
    //         continue;
    //     }
    //     cout << str[i];
    // }

    // frequency array - TC O(len)
    int fre[26] = {0};
    for (int i = 0; i < len; i++)
    {
        if (str[i] == ' ')
        {
            continue;
        }
        fre[str[i] - 'a']++;
    }

    for (int i = 0; i < 26; i++)
    {
        // if (fre[i] > 0)
        for (int j = 0; j < fre[i]; j++)
            cout << (char)(i + 'a');
    }

    return 0;
}