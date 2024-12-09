#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    for (int tc = 1; tc <= t; tc++)
    {

        int n;
        cin >> n;

        vector<int> divisors;

        for (int i = 1; i <= sqrt(n); i++)
        {
            if (n % i == 0)
            {
                divisors.push_back(i);
                if (n / i != i)
                    divisors.push_back(n / i);
            }
        }

        sort(divisors.begin(), divisors.end());

        cout << "Case " << tc << ": ";

        for (int i = 0; i < divisors.size(); i++)
        {
            cout << divisors[i] << " ";
        }

        cout << endl;
    }
}