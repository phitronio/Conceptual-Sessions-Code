#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int roll;
    int marks;

    Student(string name, int roll, int marks)
    {
        this->name = name;
        this->roll = roll;
        this->marks = marks;
    }
};

class comparator
{
public:
    bool operator()(Student a, Student b)
    {
        if (a.marks == b.marks)
        {
            if (a.roll > b.roll)
            {
                return true;
            }
            else
                return false;
        }
        else
        {
            if (a.marks < b.marks)
            {
                return true;
            }
            else
                return false;
        }
    }
};

int main()
{
    // default
    priority_queue<Student, vector<Student>, comparator> pq;

    for (int i = 0; i < 5; i++)
    {
        string name;
        cin >> name;
        int roll, marks;
        cin >> roll >> marks;

        pq.push(Student(name, roll, marks));
    }

    while (!pq.empty())
    {
        Student pr = pq.top();
        cout << pr.roll << " " << pr.name << " " << pr.marks << endl;
        pq.pop();
    }
}