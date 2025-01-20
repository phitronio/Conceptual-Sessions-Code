/**
 * All Praise to Allah
 * ---------------------
 * Author: Asif Mohammed Sifat
 * Created: 2025-01-20   17:47:25
 * Source:
 */
#include <bits/stdc++.h>
using namespace std;

class MaxHeap
{
public:
    vector<int> nodes;
    MaxHeap()
    {
    }

    void up_heapify(int idx)
    {

        while (idx > 0 && nodes[idx] > nodes[(idx - 1) / 2])
        {
            swap(nodes[idx], nodes[(idx - 1) / 2]);
            idx = (idx - 1) / 2;
        }
    }

    void down_heapify(int idx)
    {
        while (1)
        {
            int largetIndex = idx;

            int l = 2 * idx + 1;
            int r = 2 * idx + 2;

            if (l < nodes.size() && nodes[largetIndex] < nodes[l])
                largetIndex = l;
            if (r < nodes.size() && nodes[largetIndex] < nodes[r])
                largetIndex = r;

            if (largetIndex == idx)
                break;

            swap(nodes[idx], nodes[largetIndex]);
            idx = largetIndex;
        }
    }

    void push(int val)
    {
        nodes.push_back(val);
        up_heapify(nodes.size() - 1);
    }

    void pop(int idx)
    {
        swap(nodes[idx], nodes[nodes.size() - 1]);
        nodes.pop_back();
        down_heapify(idx);
    }

    void buildHeapFromArray(vector<int> arr)
    {
        nodes = arr;
        int lastNonLeafNode = nodes.size() / 2 - 1;

        for (int i = lastNonLeafNode; i >= 0; i--)
        {
            down_heapify(i);
        }
    }

    int ExtractMax()
    {
        int mx = nodes[0];
        pop(0);
        return mx;
    }

    void print()
    {
        for (int node : nodes)
        {
            cout << node << " ";
        }
        cout << endl;
    }
};

int main()
{
    MaxHeap heap;

    heap.push(1);
    heap.push(2);
    heap.push(3);
    heap.push(4);
    heap.push(5);

    // heap.pop(1);

    vector<int> arr = {1, 2, 3, 4, 5};

    heap.buildHeapFromArray(arr);

    // heap.print();
    vector<int> result;
    for (int i = 0; i < arr.size(); i++)
    {
        int mx = heap.ExtractMax();
        result.push_back(mx);
    }

    reverse(result.begin(),result.end());

    for (int val : result)
    {
        cout << val << " ";
    }

    // cout<<heap.ExtractMax()<<endl;
    // cout<<heap.ExtractMax()<<endl;
    // cout<<heap.ExtractMax()<<endl;
    // cout<<heap.ExtractMax()<<endl;

    return 0;
}
