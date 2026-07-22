// problem link: https://leetcode.com/problems/maximum-nesting-depth-of-the-parentheses/

class Solution {
public:
    int maxDepth(string s) {
        stack<char> st;

        int res = 0;

        for(auto c : s)
        {
            if (c == '(') {
                st.push(c);
                int sz = st.size();
                res = max(res, sz);

            } else {
                if (c == ')') st.pop();
            }
        }

        return res;
    }
};
