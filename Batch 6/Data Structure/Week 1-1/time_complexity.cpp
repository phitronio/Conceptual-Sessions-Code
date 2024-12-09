#include <bits/stdc++.h>
using namespace std;

int main()
{

    // O(1) -> constant

    int a, b;
    cin >> a >> b; // 1

    int sum = a + b; // 2

    // O(n) -> linear

    for (int i = 1; i <= n; i++)
    {
        cout << "hello" << endl;
    }

    // O(sqrt(n))

    for (int i = 1; i <= sqrt(n); i++)
    {
        cout << "hello world" << endl;
    }

    // O(logn)

    int n;
    cin >> n;

    for (int i = 1; i < n; i *= 2)
    {
        cout << "hello world" << endl;
    }

    for (int i = n; i >= 1; i /= 2)
    {
        cout << "hello world" << endl;
    }

    // O (N*M)
    for (int i = 1; i <= N; i++)
    {
        for (int j = 1; j <= M; j++)
        {
            cout << "Hello world" << endl;
        }
    }

    // O(nlogn)

    for (int i = 1; i <= n; i++)
    {

        for (int i = n; i >= 1; i /= 2)
        {
            cout << "hello world" << endl;
        }
    }
}