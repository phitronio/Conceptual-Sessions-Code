class MinStack {
public:
    stack<int>st,mn;
    MinStack() {
        
    }
    
    void push(int val) {

        if(mn.empty()){            
            st.push(val);
            mn.push(val);
            return;
        }
        st.push(val);
        int minVal = min(val,mn.top());
        mn.push(minVal);        
    }
    
    void pop() {
        st.pop();   
        mn.pop();
        return;    
    }
    
    int top() {
        return st.top();        
    }
    
    int getMin() {
        return mn.top();        
    }
};