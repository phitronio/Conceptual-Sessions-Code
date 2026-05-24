
#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    // char name[1000];
    string name;
    int roll;
    char section;
    int math_marks;
    int cls;
};

int main()
{

    Student s1, s2, s3;
    cin >> s1.name >> s1.roll >> s1.section >> s1.math_marks >> s1.cls;
    cin >> s2.name >> s2.roll >> s2.section >> s2.math_marks >> s2.cls;
    cin >> s3.name >> s3.roll >> s3.section >> s3.math_marks >> s3.cls;
    // cout << s1.name << s1.roll << s1.section << s1.math_marks << s1.cls << endl;
    // cout << s2.name << s2.roll << s2.section << s2.math_marks << s2.cls << endl;
    // cout << s3.name << s3.roll << s3.section << s3.math_marks << s3.cls << endl;

    Student top_mark_stu = s1;
    if (top_mark_stu.math_marks < s2.math_marks)
    {
        top_mark_stu = s2;
    }
    else if ((top_mark_stu.math_marks == s2.math_marks) && (s2.roll < top_mark_stu.roll))
    {
        // if (s2.roll < top_mark_stu.roll)
        // {
        top_mark_stu = s2;
        // }
    }

    if (top_mark_stu.math_marks < s3.math_marks)
    {
        top_mark_stu = s3;
    }
    else if ((top_mark_stu.math_marks == s3.math_marks) && (s3.roll < top_mark_stu.roll))
    {
        // if (s3.roll < top_mark_stu.roll)
        // {
        top_mark_stu = s3;
        // }
    }

    cout << top_mark_stu.name << " " << top_mark_stu.roll << " " << top_mark_stu.section << " " << top_mark_stu.math_marks << " " << top_mark_stu.cls << endl;

    return 0;
}
