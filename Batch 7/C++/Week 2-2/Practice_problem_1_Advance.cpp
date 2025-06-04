#include <iostream>
using namespace std;

class Student
{
public:
    string name;
    int roll;
    char section;
    int math_marks;
    int cls;
};

int main()
{
    int n;
    cin >> n;
    Student arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i].roll >> arr[i].name >> arr[i].section >> arr[i].math_marks >> arr[i].cls;
    }

    // for (int i = 0; i < n; i++)
    // {
    //     cout << arr[i].roll << " " << arr[i].name << " " << arr[i].section << " " << arr[i].math_marks << " " << arr[i].cls << endl;
    // }

    Student topper = arr[0];
    // topper.math_marks = -1;
    for (int i = 1; i < n; i++)
    {
        if (arr[i].math_marks > topper.math_marks)
        {
            topper = arr[i];
        }
        else if (arr[i].math_marks == topper.math_marks)
        {
            if (arr[i].roll < topper.roll)
            {
                topper = arr[i];
            }
        }
    }

    cout << topper.roll << " " << topper.name << " " << topper.section << " " << topper.math_marks << " " << topper.cls << endl;
    return 0;
}


/*  
input: 
3
3 rakib B 70 9
2 sakib A 50 9
1 atiq C 70 9
*/