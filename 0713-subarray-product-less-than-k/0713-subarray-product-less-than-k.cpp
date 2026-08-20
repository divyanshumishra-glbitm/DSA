class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {

        if (k <= 1) return 0;

        map<long long, int> mpp;
        int count = 0;

        for (int i = 0; i < nums.size(); i++) {

            map<long long, int> curr;

            // Subarray containing only nums[i]
            if (nums[i] < k) {
                curr[nums[i]]++;
                count++;
            }

            // Extend previous valid subarrays
            for (auto it : mpp) {

                // Check product < k WITHOUT multiplication overflow
                if (it.first <= (k - 1) / nums[i]) {

                    long long product = it.first * nums[i];

                    curr[product] += it.second;
                    count += it.second;
                }
            }

            mpp = curr;
        }

        return count;
    }
};