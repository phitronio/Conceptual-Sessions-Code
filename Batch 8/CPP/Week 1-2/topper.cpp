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

    Student(char name[], int roll, char section, int math_marks, int cls)
    // Student(string name, int roll, char section, int math_marks, int cls)
    {
        // this->name = name;
        strcpy(this->name, name);
        this->roll = roll;
        this->section = section;
        this->math_marks = math_marks;
        this->cls = cls;
    }
};
int main()
{
    Student s1("atiq", 2, 'A', 80, 10);
    Student s2("jahid", 1, 'B', 80, 10);
    Student s3("Ashik", 0, 'A', 80, 10);
    // Student s4("Santo", 2, 'A', 98, 10);

    Student topper = s1;

    if (topper.math_marks < s2.math_marks)
    {
        topper = s2;
    }
    else if (topper.math_marks == s2.math_marks)
    {
        if (topper.roll > s2.roll)
        {
            topper = s2;
        }
    }

    if (topper.math_marks < s3.math_marks)
    {
        topper = s3;
    }
    else if (topper.math_marks == s3.math_marks)
    {
        if (topper.roll > s3.roll)
        {
            topper = s3;
        }
    }

    // if (topper.math_marks < s4.math_marks)
    // {
    //     topper = s4;
    // }

    cout << topper.name << endl;
    return 0;
}