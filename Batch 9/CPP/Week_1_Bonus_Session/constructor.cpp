#include <bits/stdc++.h>
using namespace std;

class ABC
{
public:
    int a, b, c;
    ABC(int a, int b, int c)
    {
        // this->a = a;
        (*this).a = a;
        this->b = b;
        this->c = c;
    }
    // ABC(int x, int y, int z)
    // {
    //     a = x;
    //     b = y;
    //     c = z;
    // }
};

int main()
{
    // data_type variable_name = value;
    ABC ex_1(10, 50, 190), ex_2(11, 22, 33);
    // ex_1.a = 10;
    // ex_1.b = 50;
    // ex_1.c = 190;
    cout << ex_1.a << " " << ex_1.b << " " << ex_1.c << endl;
    cout << ex_2.a << " " << ex_2.b << " " << ex_2.c << endl;
    return 0;
}