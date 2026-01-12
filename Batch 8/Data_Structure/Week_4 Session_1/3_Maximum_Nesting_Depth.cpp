// https://leetcode.com/problems/maximum-nesting-depth-of-the-parentheses/


class Solution {
public:
    int maxDepth(string s) {
        stack<char> st;

        int mx = 0;

        for(auto c : s)
        {
            if (c == '(') {
                st.push(c);
                int cur = st.size();
                mx = max(mx, cur);

            } else {
                if (c == ')') st.pop();
            }
        }

        return mx;
    }
};