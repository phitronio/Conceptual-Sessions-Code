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
};

int main()
{
    int n;
    cin >> n;
    // Student arr[n]; // static array of object
    Student *arr = new Student[n]; // dynamic array of object

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i].roll >> arr[i].name >> arr[i].section >> arr[i].math_marks >> arr[i].cls;
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i].roll << " " << arr[i].name << " " << arr[i].section << " " << arr[i].math_marks << " " << arr[i].cls << endl;
    }

    delete[] arr; // delete dynamic array of object

    return 0;
}

/*  
input: 
5
3 rakib B 70 9
2 sakib A 50 9
1 atiq C 80 9
5 habib G 70 9
4 rahman H 80 9

*/