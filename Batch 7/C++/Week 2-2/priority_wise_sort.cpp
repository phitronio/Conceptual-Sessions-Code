#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int roll;
    char section;
    int math_marks;
    int bangla_marks;
    int english_marks;
    int physics_marks;
    int ict_marks;
    int cls;
};

bool cmp(Student l, Student r)
{
    if (l.math_marks > r.math_marks)
    {
        return true;
    }
    else if (l.math_marks == r.math_marks)
    {
        if (l.bangla_marks > r.bangla_marks)
        {
            return true;
        }
        else if (l.bangla_marks == r.bangla_marks)
        {
            return l.roll < r.roll;
        }
        else
        {
            return false;
        }
    }
    else
    {
        return false;
    }
}

int main()
{
    int n;
    cin >> n;
    Student arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i].roll >> arr[i].name >> arr[i].section >> arr[i].math_marks >> arr[i].bangla_marks >> arr[i].cls;
    }
    sort(arr, arr + n, cmp);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i].roll << " " << arr[i].name << " " << arr[i].section << " " << arr[i].math_marks << " " << arr[i].bangla_marks << " " << arr[i].cls << endl;
    }

    return 0;
}


/*  
input: 
5
3 rakib B 70 55 9
4 Rahim B 70 60 9
2 sakib A 50 80 9
5 karim A 50 80 9
1 atiq C 80 50 9


*/