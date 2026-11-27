#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;

class Cricketer
{
    public:
    string name;
    int age;
    int salary;

    Cricketer(string name, int age, int salary)
    {
       (*this).name = name;
        this->age = age;
        this->salary = salary;
    }
    

};

int main()
{
    fastIO();
    Cricketer liton("Liton das", 32, 400000);

    cout<<liton.name<<endl;
    
    
    return 0;
}