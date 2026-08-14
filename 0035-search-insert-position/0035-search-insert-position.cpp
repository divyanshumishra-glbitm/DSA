class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        //u can implement lower bound code in it 
        int ans=nums.size();
        int low=0;
        int high=ans-1;
        int mid;
        while(low<=high){
            mid=low+(high-low)/2;
            if(target<=nums[mid]){
                ans=mid;
                high=mid-1;
            }else{
                low=mid+1;
            }
        }
        return ans;
    }
};