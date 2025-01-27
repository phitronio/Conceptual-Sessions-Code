#include <bits/stdc++.h>
using namespace std;

int main()
{

    // priority_queue<data_type> name ;

    priority_queue<int> pq;

    priority_queue<int, vector<int>, greater<int>> min_heap;

    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        // pq.push(x);
        min_heap.push(x);
    }

    while (!min_heap.empty())
    {
        cout << min_heap.top() << endl;
        min_heap.pop();
    }
}