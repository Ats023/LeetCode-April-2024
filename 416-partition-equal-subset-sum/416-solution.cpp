class Solution {
public:
    bool canPartition(vector<int>& nums) {
        if(nums.size()==1) return false;
        int sum = 0;
        for(int &x: nums) sum+=x;
        if(sum%2!=0) return false;
        sum/=2;
        vector<bool> dp(sum+1, false);
        dp[0] = true;
        for(int &x: nums) {
            for(int i=sum; i>0; i--) if(i>=x) dp[i] = dp[i] || dp[i-x];
        }
        return dp[sum];
    }
};
