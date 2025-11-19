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
    Student s1("atiq", 1, 'A', 80, 10);
    Student s2("jahid", 3, 'B', 90, 10);
    Student s3("Ashik", 2, 'A', 90, 10);
    // cout << s1.math_marks << " " << s2.math_marks << " " << s3.math_marks;
    // cout << max({s1.math_marks, s2.math_marks, s3.math_marks}) << endl;

    if (s1.math_marks >= s2.math_marks && s1.math_marks >= s3.math_marks)
    {
        cout << s1.name << endl;
    }
    else if (s2.math_marks >= s1.math_marks && s2.math_marks >= s3.math_marks)
    {
        cout << s2.name << endl;
    }
    else
    {
        cout << s3.name << endl;
    }
    return 0;
}