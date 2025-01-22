#include <bits/stdc++.h>
using namespace std;

int main()
{

    map<string, int> frequency;

    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        string username;
        cin >> username;

        // username ta koibar ase
        if (frequency[username] == 0)
        {
            cout << "OK" << endl;
        }
        else
        {
            cout << username << frequency[username] << endl;
        }

        frequency[username]++;
    }
}