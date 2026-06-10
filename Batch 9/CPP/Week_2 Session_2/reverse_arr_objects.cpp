#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int roll;
    int marks;
};

int main()
{
    int n;
    cin >> n;
    // int arr[n];
    Student arr[n]; // static array of object
    // Student *arr2 = new Student[n]; // dynaminc array of object


    for (int i = 0; i < n; i++)
    {
        cin >> arr[i].name >> arr[i].roll >> arr[i].marks;
    }
    
    // reverse
    // reverse(arr, arr+n);

    // two pointer technique - reverse print
    int i = 0, j=n-1;
    while(i<j){

        // swap(arr[i], arr[j]);
        swap(arr[i].roll, arr[j].roll);

        i++;
        j--;
    }

    // for(int i=n-1;i>=0;i--) // reverse print
    for (int i = 0; i < n; i++)
    { 
        cout << arr[i].name << " " << arr[i].roll << " " << arr[i].marks << endl;
    }

    return 0;
}