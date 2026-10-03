class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n=nums.size();
        int start=0;
        int end=n-1;
        int mid;
        int first=-1;
        vector<int>ans(2,-1);

        while(start<=end){
            int mid=start +(end-start)/2;
            if(nums[mid]==target){
                first=mid;
                end=mid-1;
            }else if(nums[mid]>target) end=mid-1;
            else start=mid+1;
        }
        int low=0;
        int high=n-1;
        int midi;
        int second=-1;
        while(low<=high){
            int midi=low +(high-low)/2;
            if(nums[midi]==target){
                second=midi;
                low=midi+1;
            }else if(nums[midi]>target) high=midi-1;
            else low=midi+1;
        }
        ans[0]=first;
        ans[1]=second;
        return ans;
    }
};