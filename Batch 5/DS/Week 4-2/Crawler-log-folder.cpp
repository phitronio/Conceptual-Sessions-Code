class Solution {
public:
    int minOperations(vector<string>& logs) {
        stack<string> st;

        for(string s : logs)
        {
            if(s=="../")
            {
                if(!st.empty())
                    st.pop();
            }
            else if(s=="./")
                continue;
            else
                st.push(s);
        }
        return st.size();
    }
};