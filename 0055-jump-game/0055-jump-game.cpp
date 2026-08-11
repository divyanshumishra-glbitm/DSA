class Solution {
public:
    bool canJump(vector<int>& nums) {

        int l = nums.size() - 1;
        int farthest = 0;

        for(int i = 0; i <= l; i++) {

            if(i > farthest) {
                return false;
            }

            farthest = max(farthest, i + nums[i]);

            if(farthest >= l) {
                return true;
            }
        }

        return false;
    }
};