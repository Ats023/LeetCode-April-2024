class Solution {
public:
    bool isLCS(string &s, string& t) {
        if(s.size() > t.size()) return false;
        int i = 0;
        for(char &x: t) if(s[i]==x) i++;
        return i==s.size();
    }

    int findLUSlength(vector<string>& strs) {
        int n = strs.size(), ans = -1;
        for(int i = 0; i < n; i++) {
            int f = true;
            for(int j = 0; j < n; j++) {
                if(i!=j && (isLCS(strs[i], strs[j]))) {
                    f = false;
                    break;
                }
            }
            if(f) ans = max(ans,(int)strs[i].size());
        }
        return ans;
    }
};
