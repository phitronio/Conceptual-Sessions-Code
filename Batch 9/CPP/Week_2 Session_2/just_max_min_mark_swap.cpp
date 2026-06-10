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

    // Student max_mark_stu, min_mark_stu;
    // max_mark_stu.marks = INT_MIN;
    // min_mark_stu.marks = INT_MAX;

    

    // for (int i = 0; i < n; i++)
    // {
    //     if (max_mark_stu.marks < arr[i].marks)
    //     {
    //         max_mark_stu = arr[i]; // max student find
    //     }

    //     if (min_mark_stu.marks > arr[i].marks)
    //     {
    //         min_mark_stu = arr[i];
    //     }
    // }
    // // cout << arr[i].name << " " << arr[i].roll << " " << arr[i].marks << endl;
    // // befor swap
    // cout << max_mark_stu.name << " " << max_mark_stu.roll << " " << max_mark_stu.marks << endl;
    // cout << min_mark_stu.name << " " << min_mark_stu.roll << " " << min_mark_stu.marks << endl;

    // swap(max_mark_stu, min_mark_stu);
    // // after swap
    // cout << max_mark_stu.name << " " << max_mark_stu.roll << " " << max_mark_stu.marks << endl;
    // cout << min_mark_stu.name << " " << min_mark_stu.roll << " " << min_mark_stu.marks << endl;





    // solution - 2
    // Student max_mark_stu, min_mark_stu;
    // max_mark_stu.marks = INT_MIN;
    // min_mark_stu.marks = INT_MAX;
    
    int max_ind=-1, min_ind=-1;
    int max_mark=INT_MIN, min_mark=INT_MAX;

    

    for (int i = 0; i < n; i++)
    {
        if (max_mark < arr[i].marks)
        {
            max_mark = arr[i].marks; // max student find
            max_ind = i;
        }

        if (min_mark > arr[i].marks)
        {
            min_mark = arr[i].marks;
            min_ind=i;
        }
    }
    // cout << arr[i].name << " " << arr[i].roll << " " << arr[i].marks << endl;
    // befor swap
    cout << arr[max_ind].name << " " << arr[max_ind].roll << " " << arr[max_ind].marks << endl;
    cout << arr[min_ind].name << " " << arr[min_ind].roll << " " << arr[min_ind].marks << endl;

    swap(arr[max_ind], arr[min_ind]);
    // // after swap
    cout << arr[max_ind].name << " " << arr[max_ind].roll << " " << arr[max_ind].marks << endl;
    cout << arr[min_ind].name << " " << arr[min_ind].roll << " " << arr[min_ind].marks << endl;
    return 0;
}