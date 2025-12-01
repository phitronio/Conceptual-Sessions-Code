#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
using namespace std;

class Student
{
    public:
    string name;
    int roll, marks;
    int cls;
    
};

bool cmp(Student a, Student b)
{
    if (a.cls == b.cls) {

        if (a.marks == b.marks) {
            return a.roll < b.roll;
        } else {
            return a.marks > b.marks;
        }


    } else {
        // if (a.cls < b.cls) return true;
        // else return false;

        return a.cls < b.cls;
    }
}

int main()
{

    int n;
    cin>>n;

    Student arr[n];
    for(int i=0; i<n; i++) {
        cin>>arr[i].name>>arr[i].roll>>arr[i].marks>>arr[i].cls;
    }


    // sort(arr, arr+n, cmp);
    reverse(arr, arr+n);
    for(int i=0; i<n; i++) {
        cout<<arr[i].cls<<" "<<arr[i].name<<" "<<arr[i].roll<<" "<<arr[i].marks<<endl;
    }

    

    
    
    return 0;
}