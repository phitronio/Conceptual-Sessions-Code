/* 
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

    // int a = 40, b = 50, c = 60;
    // int max_v = INT_MIN;
    // int max_v = a;
    // // if (a > max_v)
    // // {
    // //     max_v = a;
    // // }
    // if (b > max_v)
    // {
    //     max_v = b;
    // }
    // if (c > max_v)
    // {
    //     max_v = c;
    // }
    // cout << max_v << endl;

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
    if (top_mark_stu.math_marks < s3.math_marks)
    {
        top_mark_stu = s3;
    }

    cout << top_mark_stu.name<<" " << top_mark_stu.roll<<" " << top_mark_stu.section <<" "<< top_mark_stu.math_marks <<" "<< top_mark_stu.cls << endl;

    return 0;
} 
    
*/


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
    Student(string nm, int r, char s, int m_mark, int cl){
        this->name = nm;
        this->roll = r;
        this->section = s;
        this->math_marks = m_mark;
        this->cls = cl;
    }
};

int main()
{

    // Student s1, s2, s3;
    string name;
    int roll;
    char section;
    int math_marks;
    int cls;

    cin >> name >> roll >> section >> math_marks >> cls;
    Student s1(name, roll, section, math_marks, cls);

    cin >> name >> roll >> section >> math_marks >> cls;
    Student s2(name, roll, section, math_marks, cls);

    cin >> name >> roll >> section >> math_marks >> cls;
    Student s3(name, roll, section, math_marks, cls);


    Student top_mark_stu = s1;
    if (top_mark_stu.math_marks < s2.math_marks)
    {
        top_mark_stu = s2;
    }
    if (top_mark_stu.math_marks < s3.math_marks)
    {
        top_mark_stu = s3;
    }

    cout << top_mark_stu.name<<" " << top_mark_stu.roll<<" " << top_mark_stu.section <<" "<< top_mark_stu.math_marks <<" "<< top_mark_stu.cls << endl;

    return 0;
}


/* 
atiq 1 A 80 10
Rafi 2 A 85 10
Nayem 3 A 90 10

*/