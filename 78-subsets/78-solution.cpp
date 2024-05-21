class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>> subsets;
        for(int i=0; i<(1<<n); i++) {
            vector<int> subset;
            for(int j=0; j<n; j++) {
                if(i&(1<<j)) subset.emplace_back(nums[j]);
            }
            subsets.emplace_back(subset);
        }
        return subsets;
    }
};
