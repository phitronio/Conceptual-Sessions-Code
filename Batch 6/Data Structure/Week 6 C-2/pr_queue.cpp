#include <bits/stdc++.h>
using namespace std;

int main()
{

    // priority_queue<string> pq; // max heap ;

    priority_queue<string, vector<string>, greater<string>> pq; // min heap

    for (int i = 0; i < 5; i++)
    {
        string s;
        cin >> s;
        pq.push(s);
    }

    while (!pq.empty())
    {
        cout << pq.top() << endl;
        pq.pop();
    }
}