#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int target;
    cin >> target;
    int flag = 0;
    for (int i = 0; i < n - 3; i++)
    {
        for (int j = i + 1; j < n - 2; j++)
        {
            for (int k = j + 1; k < n - 1; k++)
            {
                for (int l = k + 1; l < n; l++)
                {
                    // cout << arr[i] << " " << arr[j] << endl;
                    int sum = arr[i] + arr[j] + arr[k] + arr[l];
                    if (sum == target)
                    {
                        cout << "Yes" << endl;
                        flag = 1;
                        break;
                    }
                }
                if (flag)
                {
                    break;
                }
            }
            if (flag)
            {
                break;
            }
        }
        if (flag)
        {
            break;
        }
    }
    if (flag == 0)
    {
        cout << "No" << endl;
    }
    return 0;
}