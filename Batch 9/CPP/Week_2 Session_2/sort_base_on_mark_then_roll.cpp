#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int roll;
    int marks;
};

bool cmp(Student a, Student b)
{
    if (a.marks > b.marks)
    {
        return true;
    }
    else if (a.marks == b.marks)
    {
        if (a.roll < b.roll)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    return false;
}

int main()
{
    int n;
    cin >> n;
    // int arr[n];
    Student arr[n]; // static array of object
    // Student *arr2 = new Student[n]; // dynaminc array of object

    // arr[0].name="Atiq" ;
    // arr[0].roll = 12;
    // arr[0].marks = 80;
    // cout<<arr[0].name<<arr[0].marks<<arr[0].roll<<endl;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i].name >> arr[i].roll >> arr[i].marks;
    }
    sort(arr, arr + n, cmp);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i].name << " " << arr[i].roll << " " << arr[i].marks << endl;
    }

    return 0;
}