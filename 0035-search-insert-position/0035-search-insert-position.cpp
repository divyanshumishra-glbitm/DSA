class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        //u can do by stl also
        int lb=lower_bound(nums.begin(),nums.end(),target)-nums.begin();

        return lb;
        
    }
};