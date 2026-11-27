#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

class Student
{
public:
    string name;
    int roll;
    char section;
    int math_marks;
    int cls;

    Student(string names, int roll, char section, int math_marks, int cls) {
        this->name = names;
        this->roll = roll;
        this->section = section;
        this->math_marks = math_marks;
        this->cls = cls;

    }
};

int main()
{
    fastIO();

    Student S1("Sakib", 5, 'A', 94, 9 );
    Student S2("Liton", 4, 'B', 94, 6);
    Student S3("Shanto", 7, 'C', 78, 6);


    // if (S1.math_marks >= S2.math_marks && S1.math_marks >= S3.math_marks) {
    //     cout<<S1.name<<endl;
    // } else if (S2.math_marks >= S1.math_marks && S2.math_marks >= S3.math_marks) {
    //     cout<<S2.name<<endl;
    // } else if (S3.math_marks >= S1.math_marks && S3.math_marks >= S2.math_marks) {
    //     cout<<S3.name<<endl;
    // }

    Student topper = S1;

    if (S2.math_marks > topper.math_marks) {
        topper = S2;
    } else if (S2.math_marks == topper.math_marks) {
        if (S2.roll < topper.roll) {
            topper = S2;
        }
    }

    if (S3.math_marks > topper.math_marks) {
        topper = S3; 
    } else if (S3.math_marks == topper.math_marks) {
        if (S3.roll < topper.roll) {
            topper = S3;
        }
    }


    cout<<topper.name<<endl;

    return 0;
}


// if math-marks are equal then print the one who has smaller roll.