class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int l = nums.size();
        long long maxi = LONG_MIN;
        long long sum = 0;

        for(int i = 0; i < l; i++) {
            sum += nums[i];

            if(sum > maxi) maxi = sum;

            if(sum < 0) sum = 0;
        }

        return maxi;
    }
};