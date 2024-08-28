#include <bits/stdc++.h>
using namespace std;

int main()
{

    priority_queue<int> pq; // max heap

    pq.push(10);
    pq.push(40);
    pq.push(30);

    // while (!pq.empty())
    // {
    //     cout << pq.top() << endl;
    //     pq.pop();
    // }

    priority_queue<int, vector<int>, greater<int>> minheap;

    minheap.push(10);
    minheap.push(40);
    minheap.push(30);

    while (!minheap.empty())
    {
        cout << minheap.top() << endl;
        minheap.pop();
    }
}