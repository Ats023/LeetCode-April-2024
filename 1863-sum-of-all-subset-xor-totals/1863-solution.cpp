class Solution {
public:
    int subsetXORSum(vector<int>& nums) {
        int n = nums.size(), sum = 0;
        for(int i=0; i<(1<<n); i++) {
            int xor_total = 0;
            for(int j=0; j<n; j++) {
                if(i&(1<<j)) xor_total^=nums[j];
            }
            sum+=xor_total;
        }
        return sum;
    }
};
