class MinStack {
public:

    stack<int>st,mn;
    MinStack() {
        
    }
    
    void push(int val) {
        if(st.empty()){
            st.push(val);
            mn.push(val);
            return;
        }
        int minVal = min(val,mn.top());
        mn.push(minVal);
        st.push(val);        
    }
    
    void pop() {
        if(st.empty()) return;
        else{
            st.pop();
            mn.pop();
        }        
    }
    
    int top() {
        return st.top();
        
    }
    
    int getMin() {
        return mn.top();
        
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */