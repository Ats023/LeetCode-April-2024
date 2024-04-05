class Solution {
public:
    string makeGood(string s) {
        string ans = "";
        stack<char> st;
        for(int i = s.size()-1; i >= 0; i--) {
            if(!st.empty() && (st.top()==s[i]+32 || st.top()+32==s[i])) st.pop();
            else st.push(s[i]);
        }
        while(!st.empty()) {
            ans+=st.top();
            st.pop();
        }
        return ans;
    }
};
