class Solution {
public:
    stack<char>ss,tt;
    bool backspaceCompare(string s, string t) {

        for(int i=0;i<s.size();i++){
            if(s[i]=='#' && !ss.empty()) ss.pop();
            else if(s[i]!='#') ss.push(s[i]);
        }
        for(int i=0;i<t.size();i++){
            if(t[i]=='#' && !tt.empty()) tt.pop();
            else if(t[i]!='#') tt.push(t[i]);
        }

        if(ss.size()!=tt.size()) return false;

        while(!ss.empty()){
            if(ss.top()!=tt.top()){
                return false;
            }
            ss.pop();
            tt.pop();
        }

        return true;
        
    }
};