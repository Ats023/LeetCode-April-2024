class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n = nums.size(); 
        double maxSum = 0, currsum;
        for(int i=0; i<k; i++) maxSum+=nums[i];
        currsum = maxSum;
        for(int i=k; i<n; i++) {
            currsum = currsum+nums[i]-nums[i-k];
            maxSum = max(maxSum, currsum);
        }
        return maxSum/k;
    }
};
