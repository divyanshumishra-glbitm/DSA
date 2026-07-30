class Solution {
public:
    bool check(vector<int>& nums) {
        int rotation = 0;
        for(int i=0;i<nums.size()-1;i++)
        {
            if(nums[i]>nums[i+1])
            rotation++;
            if(rotation>1)
            return 0;

        }
        if(nums[nums.size()-1]>nums[0])
        rotation ++;
        return rotation <=1;
    }
};