class Solution {
public:
    int maxDepth(string s) {
        stack<int> st;
        int maxCount = 0;
        for(int i = 0; i < s.size(); i++) {
            if(s[i]=='(') {
                st.push('(');
                maxCount = max(maxCount, (int)st.size());
            }
            if(s[i]==')') st.pop();
        }
        return maxCount;
    }
};
