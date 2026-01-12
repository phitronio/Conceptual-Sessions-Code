// https://leetcode.com/problems/valid-parentheses/


class Solution {
public:
    bool isValid(string s) {
        stack<char> st;

        for(auto c : s) 
        {
            if (c == '(' || c == '{' || c== '[') {
                st.push(c);
            } else {
                if (st.empty()) {
                    return false;
                } else {
                    if (c == ')' && st.top() == '(') {
                        st.pop();
                    } else if (c == '}' && st.top() == '{') {
                        st.pop();
                    } else if (c == ']' && st.top() == '[') {
                        st.pop();
                    } else {
                        return false;
                    }
                }
            }
        }

        if (st.empty()) return true;
        else return false;

    }
};