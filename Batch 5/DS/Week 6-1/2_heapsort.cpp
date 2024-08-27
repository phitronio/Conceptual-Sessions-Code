#include<bits/stdc++.h>
using namespace std;

class MaxHeap{
public:
    vector<int>nodes;
    MaxHeap(){

    }

    void up_heapfiy(int idx){
        while(idx>0 && nodes[idx]>nodes[(idx-1)/2]){
            swap(nodes[idx],nodes[(idx-1)/2]);
            idx = (idx-1)/2;
        }

    }

    void down_heapify(int idx){
        

        while(1){
            int largestIndex = idx;
            int l = 2*idx+1;
            int r = 2*idx+2;

            if(l<nodes.size() && nodes[largestIndex]<nodes[l]) largestIndex = l;
            if(r<nodes.size() && nodes[largestIndex]<nodes[r]) largestIndex = r;

            if(idx==largestIndex) break;

            swap(nodes[idx],nodes[largestIndex]);
            idx = largestIndex;

        }

    }

    void print(){
        for(int node: nodes){
            cout<<node<<" ";
        }
        cout<<endl;
    }

    int ExtractMax(){
        int max = nodes[0];
        pop(0);
        return max;
    }


    void push(int val){
        nodes.push_back(val);
        up_heapfiy(nodes.size()-1);        
    }

    void buildHeapFromArray(vector<int>&arr){
        nodes = arr;
        int lastNonLeafNode = (arr.size()/2)-1;

        for(int i=lastNonLeafNode;i>=0;i--){
            down_heapify(i);
        }

    }

    void pop(int idx){
        swap(nodes[idx],nodes[nodes.size()-1]);
        nodes.pop_back();
        down_heapify(idx);
    }



};

class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
    
    MaxHeap heap;
    heap.buildHeapFromArray(nums);

    vector<int> result;

    for(int i=0;i<nums.size();i++){
        result.push_back(heap.ExtractMax());
    }

    reverse(result.begin(),result.end());

    return result;
        
    }
};

int main(){

};