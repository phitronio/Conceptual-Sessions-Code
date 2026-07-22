// problem link: https://leetcode.com/problems/baseball-game/description/ 

class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int> st;

        for(string s : operations)
        {
            if (s == "+")
            {
                int first = st.top();
                st.pop();
                int sec = st.top();
                st.push(first);

                st.push(first+sec);
            } else if (s == "D")
            {
                st.push(st.top()*2);
            } else if (s == "C") {
                st.pop();
            } else {
                st.push(stoi(s));
            }
        }


        int res = 0;
        while(!st.empty())
        {
            res += st.top();
            st.pop();
        }

        return res;
    }
};


