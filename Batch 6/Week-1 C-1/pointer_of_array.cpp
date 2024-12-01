#include <bits/stdc++.h>
using namespace std;

int main()
{

    int arr[5];

    *(arr) = 10;     // *(arr+0) => arr[0]
    *(arr + 1) = 20; // *(arr+1) => arr[1] ;
    *(arr + 2) = 30; // *(arr+2) => arr[2] ;

    *(arr + 3) = 40;

    *(arr + 4) = 50;

    for (int i = 0; i < 5; i++)
    {
        cout << *(arr + i) << endl;
    }
}