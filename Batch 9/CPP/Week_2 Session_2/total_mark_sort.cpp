#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int roll;
    int english_mark;
    int math_mark;
    int bangla_mark;
    int total_mark;
};

bool cmp(Student a, Student b)
{
    int mot1 = a.bangla_mark + a.math_mark + a.english_mark;
    int mot2 = b.bangla_mark + b.math_mark + b.english_mark;

    if (mot1 > mot2)
    {
        return true;
    }
    else if (mot1 == mot2)
    {
        if (a.roll < b.roll)
        {
            return true;
        }
    }
    // if (a.total_mark > b.total_mark)
    // {
    //     return true;
    // }
    // else if (a.total_mark == b.total_mark)
    // {
    //     if (a.roll < b.roll)
    //     {
    //         return true;
    //     }
    // }

    return false;
}

int main()
{
    int n;
    cin >> n;
    // int arr[n];
    Student arr[n]; // static array of object
    // Student *arr2 = new Student[n]; // dynaminc array of object

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i].name >> arr[i].roll >> arr[i].english_mark >> arr[i].math_mark >> arr[i].bangla_mark;

        // total mark
        arr[i].total_mark = arr[i].english_mark + arr[i].math_mark + arr[i].bangla_mark;
    }
    sort(arr, arr + n, cmp);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i].name << " " << arr[i].roll << " " << arr[i].english_mark << " " << arr[i].math_mark << " " << arr[i].bangla_mark << endl;
    }

    return 0;
}