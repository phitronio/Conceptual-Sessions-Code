#include<bits/stdc++.h>
using namespace std;

class Student
{  
    public:
        int roll;
        string name;
        int marks;
};

int main()
{
    int n;
    cin >> n;
    Student st[n];

    for(int i=0;i<n;i++)
    {
        cin >> st[i].roll >> st[i].name >> st[i].marks;
    }

    int i=0, j=n-1;

    while(i<j)
    {
        swap(st[i].marks, st[j].marks);
        i++;
        j--;
    }

    for(int i=0;i<n;i++)
    {
        cout << st[i].roll << " " << st[i].name << " " << st[i].marks << endl;
    }

    // int i,j;
    // for(i=0,j=n-1 ; i<j ; i++,j--)
    // {

    // }
}