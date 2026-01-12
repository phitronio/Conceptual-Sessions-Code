// https://leetcode.com/problems/number-of-students-unable-to-eat-lunch/description/

class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        stack<int> st;
        queue<int> q;

        int sz = sandwiches.size();
        for(int i= sz-1; i>=0; i--) {
            st.push(sandwiches[i]);
        }

        for(auto x : students) {
            q.push(x);
        }

        int cnt = 0;

        while(true)
        {
            if (q.empty()) break;

            if (q.front() == st.top()) {
                q.pop();
                st.pop();
                cnt = 0;
            } else {
                q.push(q.front());
                q.pop();
                cnt++;
            }

            if (cnt == q.size()) break;
        }

        return q.size();
    }
};