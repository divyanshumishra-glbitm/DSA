class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int l=nums.size();
        vector<int> ans(l);
        int sum=nums[0];
        ans[0]=sum;

        for(int i=1;i<l;i++){
         sum+=nums[i];
         ans[i]=sum;
        }
        return ans;
    }
};