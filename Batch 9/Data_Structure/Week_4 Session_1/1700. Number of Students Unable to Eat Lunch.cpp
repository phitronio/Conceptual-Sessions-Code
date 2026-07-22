// problem link: https://leetcode.com/problems/number-of-students-unable-to-eat-lunch/description/

class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {

        stack<int> st;
        queue<int> q;

        int sz = students.size();

        for(int i= sz - 1; i>=0; i--) {
            st.push(sandwiches[i]);
        }

        for(int i=0; i<sz; i++) {
            q.push(students[i]);
        }

        int cnt = 0;
        while(true)
        {
            if (st.empty()) break;

            if (st.top() == q.front()) {
                st.pop();
                q.pop();
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















































