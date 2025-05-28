/*
Student
{
    name;
    roll;
    section;
    math_marks;
    cls;
}
*/

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
    Student(string name, int roll, char section, int math_marks, int cls)
    {
        this->name = name;
        this->roll = roll;
        this->section = section;
        this->math_marks = math_marks;
        this->cls = cls;
    }
};

int main()
{
    Student salman("Salman", 1, 'A', 95, 8);
    Student atiq("Atiq", 2, 'A', 95, 8);
    Student afridi("Afridi", 3, 'A', 95, 8);
    // cout << salman.name << endl;

    if (salman.math_marks > atiq.math_marks && salman.math_marks > afridi.math_marks)
    {
        cout << salman.name << endl;
    }
    else if (atiq.math_marks > salman.math_marks && atiq.math_marks > afridi.math_marks)
    {
        cout << atiq.name << endl;
    }
    else if(afridi.math_marks > salman.math_marks && afridi.math_marks > atiq.math_marks)
    {
        cout << afridi.name << endl;
    }

    return 0;
}