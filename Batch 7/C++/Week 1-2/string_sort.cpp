#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    string str;
    getline(cin, str);

    // method 1: using frequecy array
    int freq[26] = {0};
    // char ar[10];
    // strlen();
    for (int i = 0; i < str.length(); i++)
    {
        // cout << str[i] << " ";
        if (str[i] != ' ')
            freq[str[i] - 'a']++;
    }
    for (int i = 0; i < 26; i++)
    {
        // cout << freq[i] << endl;
        if (freq[i] > 0)
        {
            for (int j = 0; j < freq[i]; j++)
            {
                cout << (char)(i + 'a');
            }
        }
    }
    // method 2: sort function
    // sort(str.begin(), str.end());

    // // int arr[n];
    // // sort(arr, arr + n);
    // for (int i = 0; i < str.length(); i++)
    // {
    //     if (str[i] != ' ')
    //         cout << str[i];
    // }
    return 0;
}