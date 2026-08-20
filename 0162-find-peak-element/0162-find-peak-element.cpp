class Solution {
public:
    int findPeakElement(vector<int>& nums) {

        int l=nums.size();

        //now dealing with the edge cases such that code become smooth

        if(l==1) return 0;

        if(nums[0]>nums[1]) return 0;

        if(nums[l-1]>nums[l-2]) return l-1;

        int start=1;
        int end=l-2;
        int mid;

        while(start<=end){
            mid=start+(end-start)/2;

            if((nums[mid-1]<nums[mid])&&(nums[mid]>nums[mid+1])) return mid;

            if(nums[mid-1]<nums[mid] && nums[mid]<nums[mid+1]) start=mid+1;
            else end=mid-1;

        }


        return -1;
    }
};