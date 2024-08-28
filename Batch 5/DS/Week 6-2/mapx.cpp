#include <bits/stdc++.h>
using namespace std;

int main()
{

    map<string, int> identity; // ( key, value)
    // 1st
    identity["Rahim"] = 18;
    identity["Karim"] = 20;
    // 2nd

    identity.insert(make_pair("Aziz", 22));

    // 3rd
    identity.insert({"Nayeem", 28});
    identity["Nayeem"] = 30;

    for (auto pair : identity)
    {
        cout << pair.first << " " << pair.second << endl;
    }
}