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
};

bool cmp(Student a, Student b)
{
    if (a.english_mark > b.english_mark)
    {
        return true;
    }
    else if (a.english_mark == b.english_mark)
    {
        if (a.math_mark > b.math_mark)
        {
            return true;
        }
        else if (a.math_mark == b.math_mark)
        {
            if (a.bangla_mark > b.bangla_mark)
            {
                return true;
            }
            else if (a.bangla_mark == b.bangla_mark)
            {
                if (a.roll < b.roll)
                {
                    return true;
                }
                else if (a.roll == b.roll)
                {
                    if (a.name < b.name)
                    {
                        return true;
                    }
                }
            }
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

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i].name >> arr[i].roll >> arr[i].english_mark >> arr[i].math_mark >> arr[i].bangla_mark;
    }
    sort(arr, arr + n, cmp);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i].name << " " << arr[i].roll << " " << arr[i].english_mark << " " << arr[i].math_mark << " " << arr[i].bangla_mark << endl;
    }

    return 0;
}