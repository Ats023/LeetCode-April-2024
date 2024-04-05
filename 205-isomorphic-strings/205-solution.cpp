class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char, char> mp;
        for(int i = 0; i < s.size(); i++) {
            if(mp.count(s[i])!=0 && mp[s[i]]!=t[i]) return false;
            else if(mp.count(s[i])==0) {
                for(auto x: mp) if(x.second==t[i]) return false;
                mp[s[i]] = t[i];
            }
        }
        return true;
    }
};
