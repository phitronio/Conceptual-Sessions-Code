#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;


class Student
{
    public:
    string name;
    int roll;
    int marks;
};

bool cmp(Student a, Student b)
{
    if (a.marks == b.marks)
    {
        if (a.roll < b.roll) {
            return true;
        } else {
            return false;
        }

    } else {
        if (a.marks > b.marks) {
            return true;
        } else {
            return false;
        }
    }
}

int main()
{
    fastIO();

    int n;
    cin>>n;

    Student arr[n];

    for(int i=0; i<n; i++)
    {
        cin>>arr[i].name>>arr[i].roll>>arr[i].marks;
    }


    sort(arr, arr+n, cmp);

    for(int i=0; i<n; i++)
    {
        cout<<arr[i].name<<" "<<arr[i].roll<<" "<<arr[i].marks<<endl;
    }

    

    
    
    return 0;
}