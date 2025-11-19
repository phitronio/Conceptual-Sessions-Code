/*
________________________
|                      |
|     AB Atiq          |
|______________________|
*/

#include <bits/stdc++.h>
// #include <string.h>

using namespace std;

class Student
{
public:
    char name[101];
    // string name;
    int roll;
    char section;
    int math_marks;
    int cls;

    // Student(char name[], int roll, char section, int math_marks, int cls)
    // // Student(string name, int roll, char section, int math_marks, int cls)
    // {
    //     // this->name = name;
    //     strcpy(this->name, name);
    //     this->roll = roll;
    //     this->section = section;
    //     this->math_marks = math_marks;
    //     this->cls = cls;
    // }
};
int main()
{
    int max_mark = -1000;
    Student topper;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        Student tem_stu;
        cin >> tem_stu.name >> tem_stu.roll >> tem_stu.section >> tem_stu.math_marks >> tem_stu.cls;

        // cout << tem_stu.name << " " << tem_stu.roll << " " << tem_stu.section << " " << tem_stu.math_marks << " " << tem_stu.cls << endl;
        if (max_mark < tem_stu.math_marks)
        {
            topper = tem_stu;
            max_mark = tem_stu.math_marks;
        }
        else if (max_mark == tem_stu.math_marks)
        {
            if (topper.roll > tem_stu.roll)
            {
                topper = tem_stu;
            }
        }
    }

    cout << topper.name << " " << topper.roll << " " << topper.cls << " " << topper.math_marks << endl;
    return 0;
}

/*
3
atiq 2 A 80 10
jahid 1 B 80 10
Ashik 0 A 80 10
*/