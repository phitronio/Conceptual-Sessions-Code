#include <iostream>
#include <vector>

using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    // O(n)
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    for (int i = 0; i < n; i++)
    {
        // Get left sum
        int leftSum = 0;
        for (int j = 0; j < i; j++)
            leftSum += v[j];

        // Get right sum
        int rightSum = 0;
        for (int j = i + 1; j < n; j++)
            rightSum += v[j];

        // If leftsum and rightsum are same, then index i is an equilibrium index
        if (leftSum == rightSum)
        {
            cout << i << " ";
        }
    }

    return 0;
}