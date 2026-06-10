#include<bits/stdc++.h>
using namespace std;

class Student 
{
public:
	string name;
	int roll;
	int marks;
};

int main(){
    int n;
    cin>>n;
    // int arr[n];
    Student arr[n];// static array of object
    Student *arr2 = new Student[n]; // dynaminc array of object

    arr[0].name="Atiq" ;
    arr[0].roll = 12;
    arr[0].marks = 80;
    cout<<arr[0].name<<arr[0].marks<<arr[0].roll<<endl;
    
    arr2[0].name="Atiq2" ;
    arr2[0].roll = 122;
    arr2[0].marks = 802;
    cout<<arr2[0].name<<arr2[0].marks<<arr2[0].roll<<endl;
    arr[1].name="Shuvo";

    return 0;
}