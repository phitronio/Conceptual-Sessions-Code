#include<bits/stdc++.h>
using namespace std;

class Student
{
    public:
        string name;
        int id;
        int bang;
        int eng;
        int math;

        int total;
        double avg;
        string gpa;
        int roll;
};

bool cmp (Student a, Student b)
{
    if(a.total > b.total)
        return true;
    else if(a.total < b.total)
        return false;
    else
    {
        if(a.id < b.id)
            return true;
        else
            return false;
    }
}

int main()
{
    int n;
    cin >> n;
    Student st[n];

    for(int i=0;i<n;i++)
    {
        cin >> st[i].id >> st[i].name >> st[i].bang >> st[i].eng >> st[i].math;
        st[i].total = st[i].bang + st[i].eng + st[i].math;
        st[i].avg = (double) st[i].total / 3 ;

        if(st[i].avg >= 80)
            st[i].gpa = "A+";
        else if(st[i].avg >= 70)
            st[i].gpa = "A";
        else if(st[i].avg >= 60)
            st[i].gpa = "A-";
        else if(st[i].avg >= 50)
            st[i].gpa = "B+";
        else if(st[i].avg >= 40)
            st[i].gpa = "B";
        else
            st[i].gpa = "F";
    }

    sort(st,st+n,cmp);

    cout << "\n\nRoll\tID\tName\tBang\tEng\tMath\tTotal\tAvg\tGPA\n";
    cout << "----------------------------------------------------------------------------\n";
    for(int i=0;i<n;i++)
    {
        cout << i+1 << "\t" << st[i].id << "\t" << st[i].name << "\t" << st[i].bang << "\t" << st[i].eng << "\t" << st[i].math << "\t" << st[i].total << "\t" << fixed << setprecision(2) <<  st[i].avg << "%\t" << st[i].gpa << endl;
    }
}


