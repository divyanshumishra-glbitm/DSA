class Solution {
public:
    int longestConsecutive(vector<int>& nums) {

        sort(nums.begin(), nums.end());

        int count = 0, max1 = 0;
        long long k;

        if (nums.size() == 0)
            return 0;

        for (int i = 0; i < nums.size(); i++) {

            k = nums[i];

            if (i < nums.size() - 1 && nums[i + 1] == k + 1) {
                count++;
                max1 = max(count, max1);
            }
            else if (i < nums.size() - 1 && nums[i + 1] == k) {
                continue;
            }
            else {
                count = 0;
            }
        }

        return max1 + 1;
    }
};