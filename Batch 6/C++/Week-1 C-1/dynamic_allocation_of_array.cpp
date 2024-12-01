#include <bits/stdc++.h>
using namespace std;

int main()
{

    int *ar = new int[3];
    ar[0] = 10;
    ar[1] = 20;
    ar[2] = 30;

    int ar1[5];

    for (int i = 0; i < 3; i++)
    {
        ar1[i] = ar[i];
    }

    delete[] ar;
    ar1[3] = 12;
    ar1[4] = 13;

    for (int i = 0; i < 5; i++)
    {
        cout << ar1[i] << endl;
    }
}