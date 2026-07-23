// https://leetcode.com/problems/minimum-string-length-after-removing-substrings/description/


class Solution {
public:
    int minLength(string s) {
        stack<char> st;
        for (char ch : s) {
            if (st.empty()) {
                st.push(ch);
            } else if ((st.top() == 'A' && ch == 'B') ||
                       (st.top() == 'C' && ch == 'D')) {
                st.pop(); // AB matched, so remove both
            }
            // else if (st.top() == 'C' && ch == 'D')
            // {
            //     st.pop(); // CD matched, so remove both
            // }
            else {
                st.push(ch);
            }
        }
        return st.size();
    }
};